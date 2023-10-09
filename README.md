# SiStArduinoAbstraction
Simplicity Studio example for ArduinoAbstraction repository. It uses Arduino [SI7021 Library](https://github.com/LowPowerLab/SI7021) with no/low modifications to display output on serial port.

# ArduinoAbstraction changes
Update macro in "ArduinoAbstraction/EFR32Variant.h" to support xG24 dev kit.

```cpp
#define XG24EK2703B 1

to

#define XG24DK2601B 1
```

# Setup
1. Clone repository.
2. Open Repository folder as workspace.
3. Validate all the required dependencies are installed like SDK etc.
4. Compile and flash. You will be able to see the Temprature and Humidity in Serial output.

# Output
Below is the output
```bash
Humidity: 72
Device ID: 15
Temprature: 32
Humidity: 72
Device ID: 15
Temprature: 32
Humidity: 73
```