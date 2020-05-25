# REMCU examples

Examples illustrating application development on the [**REMCU Lib**](https://remotemcu.com/). These examples are designed to get you up and running with REMCU Lib in no time.

| Target 	| Jupyter notebook ex. 	| Python scripts ex. 	| Qt app ex. 	| C/C++ app ex. 	| Raspberry Pi board examples 	|
|:-----------------:	|:--------------------------------------------------:	|:------------------:	|:-------------------------------:	|:--------------------:	|:------------------------------------------------------------------------------------------------:	|
| stm32f4_discovery 	| C++(cling) & Python:<br>*ADC, DAC, DMA, GPIO, PWM* 	|  	| Accelerometer & CAN bus sniffer 	|  	|  	|
| STM32F767X 	| C++(cling): *ADC, DAC, DMA, GPIO, PWM* 	|  	|  	|  	|  	|
| STM32F103RCT6 	| C++(cling) & Python: *ADC, GPIO, PWM* 	| *ADC, GPIO* 	|  	| *ADC, DAC, DMA, GPIO, CAN bus* 	| C/C++ apps & Python scripts: *ADC, GPIO, CAN bus*<br> - the prepared Raspbian image is available 	|
| STM32F103C8T6<br>Blue Pill board 	| soon 	| soon 	|  	| soon 	| soon - the prepared Raspbian image will be available 	|
| stm8l_discovery 	| C++(cling): *ADC, DAC, DMA, GPIO, LCD screen* 	|  	|  	|  	|  	|
| STM32F030-51 	| C++(cling) & Python: *ADC, GPIO* 	|  	|  	|  	| Python scripts: *ADC, GPIO*<br> - the prepared Raspbian image is available 	|
| stm32f3_discovery 	| soon 	|  	| soon : Compas & Accelerometer 	|  	|  	|
| KIT_XMC_2GO_XMC1100 	| soon 	| soon 	|  	|  	|  	|
| LPC1768(NXP) 	| soon 	|  	| soon: CAN bus sniffer 	|  	|  	|
| FRDM-K64F(Freescale/NXP) 	| soon 	|  	| soon: Accelerometer 	|  	|  	|
| EFM32TG(Silabs) 	| soon 	|  	| soon: LCD printer 	|  	|  	|
| SAMD20(Microchip) 	| soon 	|  	|  	|  	|  	|

<details>
	<summary> Short demo
		<b>(click here to view) </b></summary>

stm32f4_discovery/accell_graph demo:  
![monitor_of_acc](stm32f4_discovery/accell_graph/img/monitor_of_acc.gif)  

stm32f4_discovery/CAN_BUS demo:  
![monitor_of_acc](stm32f4_discovery/CAN_BUS/img/CAN_demo.gif)

stm32f4_discovery/jupyter-notebook PWM demo:  
![slider_f4d](stm32f4_discovery/jupyter-notebook/img/slider_f4d.gif)  

stm32f4_discovery/jupyter-notebook ADC demo:  
![f4_adc](stm32f4_discovery/jupyter-notebook/img/f4_adc.gif)
</details>

The [**REMCU Lib**](https://remotemcu.com/) is a cross-platform library designed for remote access to internal peripherals of various MCU and SoC as if these peripherals were a part of your computer.
The library gives access a user space program to all peripherals of the remote chip  through the same API as peripheral drivers from Software Development Kit (SDK) provided by semiconductor chip vendors or third parties for MCU firmware development.
Thereby a developer doesn’t need to learn new tools but can just reuse his firmware code and examples of the SDK in his code designed for personal or embedded computers.
Firmware and protocol communication development are not required, because the [**REMCU Lib**](https://remotemcu.com/) translates itself the local API function call on computer to the call of the same function of peripheral driver on the remote chip.

Let's have a look at the video below and see what opportunities and applications it provides.

[![REMCU DESCRIPTION](img/preview_description.png)](https://youtu.be/PJPl9Y96hA0)

Full details of the examples can be found in README.md file of the corresponding folders.

## Support policy

If you discover a problem with any of the samples published here that isn't already reported in Issues, open a [New issue](https://github.com/remotemcu/remcu_examples/issues/new?assignees=&labels=bug&template=bug_report.md&title=).

If you have a feature idea - please open a [feature request](https://github.com/remotemcu/remcu_examples/issues/new?assignees=&labels=Feature+request&template=feature_request.md&title=).  
If you have new sample development on the REMCU Lib  - please opening a [pull request](https://github.com/remotemcu/remcu_examples/pulls) or [*"Suggestion of examples"*](https://github.com/remotemcu/remcu_examples/issues/new?assignees=&labels=Suggestion+of+examples&template=suggestion-of-examples.md&title=) request.  
We will be pleased to answer all your questions about the REMCU Lib project through the options/channels below:  
*StackOverflow*. Tag your question with **#remculib** tag. We watch full list of questions and will answer ASAP. Make experience that you've got available for other users!  
[Contact us form](https://remotemcu.com/contact-us)  
[@Email](support@remotemcu.com)  
[Twitter](https://twitter.com/RemoteMcu)  

Thanks in advance!
