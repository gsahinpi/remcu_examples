#include "mcuthread.h"

#include <QtCore/QRandomGenerator>
#include <QThread>
#include <QtDebug>

#include "utils.h"

McuThread::McuThread(){}

void McuThread::run()
{
    accel_data_t data;
    bool success = remcu_resetRemoteUnit(__HALT);

    success &= remcu_isConnected();

    if(success == false
        || remcu_getErrorCount() != 0){
        qWarning() << "Error connect to server or board problem";
        return;
    }

    SystemInit();

    /* Demo Gyroscope */
    Demo_GyroConfig();

    float GypoBuffer[3] = {0.0f};

    while(1){
        /* Read Gyro Angular data */
        Demo_GyroReadAngRate(GypoBuffer);

        data.accX = GypoBuffer[0];
        data.accY = GypoBuffer[1];
        data.accZ = GypoBuffer[2];
        emit dataChanged(data);

        qDebug() << "err: " << remcu_getErrorCount() <<
            " | GyroX " << data.accX <<
            " | GyroY " << data.accY <<
            " | GyroZ " << data.accZ;

        if(remcu_getErrorCount() != 0){
            qWarning() << "Error connect to server or hardware problem";
            break;
        }

        QThread::msleep(100);
    }
}

void McuThread::tryConnect(remcu_thread_options_t options)
{
    qDebug() << "server params:" << options.host << options.port;

    if(this->isRunning()){
        qWarning() << "MCU thread is running yet";
        return;
    }

    bool connect_ok = true;

    if(options.port == 6666){ //connect to OpenOcd server
        connect_ok = remcu_connect2OpenOCD(options.host.toLatin1().data(), 6666, 1);
    } else { //connect to GDB server
        connect_ok = remcu_connect2GDB(options.host.toLatin1().data(), options.port, 1);
    }

    if(connect_ok == false){
        qWarning() << "Server " << options.host << options.port << " error - Can't run thread";
        return;
    }

    this->start();
}

extern "C" uint32_t L3GD20_TIMEOUT_UserCallback(void){
    qDebug() << "Error : L3GD20_TIMEOUT";
    return 1;
}

extern "C" uint32_t LSM303DLHC_TIMEOUT_UserCallback(void){
    qDebug() << "Error : LSM303DLHC_TIMEOUT";
    return 1;
}
