# Automatic-Water-Tank-System
A system to fill water based on the two available sources (Municipal and underground storage) to reduce the wastage of water and improve the user’s quality of life. 

### Demonstration Video : https://www.youtube.com/watch?v=MYhJQ0k04Xk

## Circuit PCB
![N|Solid](https://github.com/naman-tanwar/Automatic-Water-Tank-System/blob/main/Photos/IMG_20211016_184807.jpg)
## Final Build
![N|Solid](https://github.com/naman-tanwar/Automatic-Water-Tank-System/blob/main/Photos/IMG_20211107_113342.jpg)

## Abstract:
Many common houses in India has mainly two sources of water to fill there rooftop tank, namely, an underground storage tank and municipal water supply. This project aims to fill the rooftop tank without any human intervention thereby reducing the wastage of water. The project will automatically decide which source to be used to fill the tank based on the availability.

## Introduction:
In India, many houses have mainly two sources of water to fill the rooftop water tank. These are underground storage tank and municipal water supply. Based on the availability, the rooftop tank is filled either with the municipal supply or with the underground storage tank manually. The rooftop tank is filled with water from underground storage tank which the help of a water pump.
This manual way of filling the tank requires a lot of manual monitoring of the water level inside the tank and also increase the wastage of water. To reduce water wastage and to improve the quality of life, this project aims to fill the tank automatically without any human intervention.
This project will determine the level of water in the rooftop tank, check for the availability of any supply to fill the tank, and then fill the tank to the desired level using any of the two available source. The filling of the tank through municipal supply is controlled through a solenoid valve and the water pump is controlled through a contactor. The decision making is done through a microcontroller i.e., Arduino Nano and many analog electronic devices like BJT, MOSFETs, and diodes are also utilised.

## Design:
### Methodology
The working of the project can be defined using two cases which will utilise different water source based on availability.
##### Case 1:
Water level is below 75% and municipal supply is not available.
In this case, water will be filled through the underground tank using water pump till a maximum of 75% water level is reached.
##### Case 2:
Water level is below 100% and municipal supply is available.
In this case, water will be filled through the municipal supply to the tank’s full capacity. A solenoid valve will be used to stop filling the tank after the tank is fully filled.

### Mechanical Design
The availability of municipal supply is detected by the two electrodes drilled into the pipe and connected to Arduino. The gap between the electrodes acts as a hindrance to the flow of current (Resistance). When the supply is available then the current starts flowing through the electrodes which then is detected by the Arduino (Microcontroller).
The flow of water from the municipal supply is controlled through a solenoid valve and the water pump is used to fill the water from underground storage tank to rooftop tank.
Two one way valves are used to prevent reverse flow of water. The two supply is merged to a single outlet through a T-connector.


### *PLEASE REFER THE ATTACHED REPORT TO FIND MORE INFORMATION *
