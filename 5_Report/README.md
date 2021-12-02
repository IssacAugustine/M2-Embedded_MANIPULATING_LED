# Requirements

# Introduction
Manipulating led is a process of blinking the led.It can be done by using many ways,

1.Relays.

2.Transistors.

3.Inverter.

4.555 Timer.

5.ATmega328 Microcontroller.

Here swtich is used to blink the two LED using ATmega328(a microcontroller).


# Objective
The main objective is to manipulating the led using ATmega328 and a switch to controll two LED's.

# Components used
1.ATmega328   

2.Two LED 

3.Switch

4.Resistor
# software used
1.simulIDe

2.Visual Studie Code

# Features
   It has simple features.

    1.The led will be off when the switch is off
    2.The led will be on when the switch is off.
       
    
# 4W's and 1 H's
   ## Why
   * Is used to flicker two led using ATmega328.
    
   ## Where
   * It can be used in any field.
    
   ## Who
   * Mainly it is used by the students.
   * Embedded Field Students can work through this project.
    
   ## When
   * It can be implemented in the school and collage.
    
   ## How
   * It can be done by using Embedded programming language.
   * The main component is ATmega328.
   
# SWOT Analysis
   ## Strengths
   * Simple.
   * Cheap.
   ## Weakness
   * It is a simple code.
   ## Opportunities
   * It will harder when the code is too complex.
   
   ## Threats
   * There are advanced programs which are simple to learn is out already.
    
# High Level Requirements
| Id    	| Description     	| Status      	|
|-------	|-----------------	|-------------	|
| HLR_1 	| Microcontroller 	| Implemented 	|
| HlR_2 	| Swtich          	| Implemented 	|
| HLR_3 	| Two LED         	| Implemented 	|
| HLR_4 	| Software        	| Implemented 	|
# Low Level Requirements
| Id    	| Description              	| Status      	|
|-------	|--------------------------	|-------------	|
| LLR_1 	| ATmega328                	| Implemented 	|
| LLR_2 	| Swtich                   	| Implemented 	|
| LLR_3 	| Two LED                  	| Implemented 	|
| LLR_4 	| Visual studio & SimulIDE 	| Implemented 	|

# Design
 1.This project uses ATmega328.
 
 2.This system uses swtich to blink LED.
# Behavior Diagram
![Blank diagram](https://user-images.githubusercontent.com/94215887/144366190-4952b482-4f0c-40cf-8398-8ada92070bdf.jpeg)
# Structural Diagram
![Blank diagram (1)](https://user-images.githubusercontent.com/94215887/144366226-d3822a39-89c1-421b-aa2a-6254ec3a29f6.jpeg)
# Block Diagram
![Blank diagram (2)](https://user-images.githubusercontent.com/94215887/144366258-c0cbde87-f1e1-4ce5-8e9b-a09c0b3c0e47.jpeg)
# Simulation






# Implementation
# Folder Structure
| Folder   |      Description     |
|----------|:-------------:|
| document | Doxygen documentation |
| inc | All header files |
| simulation | simulation files |
| src | Main source code for calculator |
# Test Plan
# High Level Requirement
| Id    	| Description 	| Expected I/P 	| Expected O/P 	| Actual O/P 	| Type Of Test 	|
|-------	|-------------	|--------------	|--------------	|:----------:	|--------------	|
| HLR_1 	| Switch on   	| High power   	| LED On       	| LED On     	| Rquirement   	|
| HLR_2 	| Switch Off  	| No power     	| LED Off      	| LED Off    	| Requirement  	|
# Low Level Requirement
| Id    	| Description 	| Expected I/P 	| Expected O/P 	| Actual O/P 	| Type Of Test 	|
|-------	|-------------	|--------------	|--------------	|:----------:	|--------------	|
| LLR_1 	| Switch on   	| value 1      	| LED On       	| LED On     	| Rquirement   	|
| LLR_2 	| Switch Off  	| value 0      	| LED Off      	| LED Off    	| Requirement  	|

