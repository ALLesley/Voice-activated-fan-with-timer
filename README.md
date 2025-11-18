# Voice actived fan with timer
This project consists of a fan that is controlled by a timer that's set by speech recognition AI. When you turn on a light (simulated with a button and LED arduino circuit), the AI will ask how long you want the fan on for. The time can be set for any number of seconds or minutes. The fan will turn off when the timer is done or the light is turned off. When the light is off, the temperature sensor will check if the room is too hot. The fan will turn on while the temperature is above the set threshold. 

# Hardware components:
An Arduino (I have a Mega 2560)<br>
LED<br>
Button<br>
3-6V Fan Motor with wires<br>
L293D<br>
DHT11 Temperature sensor<br>

# Software components:
Arduino IDE<br>
VS Code to run python (version 3.11.0)<br><br>
For AI: <br>
pip install GoogleAudio <br>
pip install SpeechRecognition <br><br>
Arduino libraries: <br>
Adafruit Unified Sensor by Adafruit <br>
BH1750 by Christopher Laws <br>
DFRobot_DHT11 by DFRobot <br>
DHT Sensors Non-Blocking by Toan Nguyen <br>
DHT sensor library by Adafruit

# My contributions:
I created the original fan circuit and arduino code for the fan. I contributed to integrating the button circuit and button arduino code with my fan circuit and code. I helped with figuring out how the python code communicates with the arduino code for turning the fan on and off. I integrated the temperature arduino code with the button and fan code. 

# Instruction video:
https://youtu.be/PD56wo9Ue-Q 
