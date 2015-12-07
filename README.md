# anyboardpawn
## hardware
* RFduino ([website](http://www.rfduino.com/), [GitHub](https://github.com/RFduino/RFduino))
* Accelerometer ADXL345 ([datasheet](http://www.analog.com/media/en/technical-documentation/data-sheets/ADXL345.pdf))
* Vibrating motor ([datasheet](https://www.sparkfun.com/datasheets/Robotics/310-101_datasheet.pdf))

RFduino<->Accelerometer connexion :
- GPIO 6 <-> SDA
- GPIO 5 <-> SCL
- GPIO 2 <-> INT1
- 3V3 <-> 3v3
- GND <-> GND

RFduino<->Vibrating motor connexion :
- GPIO 3 <-> Vin
- GND <-> GND

## libraries
All the libraries that I use for the examples are in the folder *libraries*. They have to be put in the Arduino's libraries folder. 
### Adafruit_ADXL345
For the ADXL345 I use the Arduino library of Adafruit ([Adafruit_ADXL345](https://github.com/adafruit/Adafruit_ADXL345)). 

### Adafruit_Sensor
The Adafruit_ADXL345 library is based on the Adafruit's Unified Sensor Library ([Adafruit_Sensor](https://github.com/adafruit/Adafruit_Sensor)).

### Vibrating_Motor
This library provide function for the vibrating motor that I use.

## examples
### acc_taps_detection_example
### acc_taps_detection_with_vibrating_motor_example
### acc_activity_detection
### acc_shake_and_taps_detection
