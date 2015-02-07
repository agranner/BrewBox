# BrewBox
An arduino HERMS controller

## TODO

With only a controller and no hardware, I first need to work on the 
State Machine:   
- Modes
- Timer(s)  
- Serial/Processing

Once I add a temp sensor and heater/relay:   
- PID
- PID frontend

## Outline

Menu prompts for a setpoint while displaying the current setpoint.   

On command, run the PID and display the mash temp, updating regularly.   

