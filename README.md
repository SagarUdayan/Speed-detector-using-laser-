# Speed-detector-using-laser-

Finding the speed of linearly moving objects using laser

In order to make a speedometer we need:

#Bread Board

#Arduino

#2 LDR’s

#Jumper wires

#2 10k ohm Resistors

It's an attempt to make a speed detector for linearly moving ground vehicles.

This experiment is for fixed length. When the object passes through the first laser a timer is started which stops when the object will pass the second laser. This will provide us the time taken by the object to cover the distance. Now with the help of the available data we can easily find the velocity of the object using

speed = distance/time.

All the calculations are being performed by the Arduino-Uno board which uses the written C# code to perform all the calculations.

The board is connected to other parts of the working model like resistors, LDRs using a breadboard and jump wires.

CIRCUIT EXPLANATION

First connect the 2 LDRs 10 cm away on the breadboard and connect one terminal of the LDR with each other and then to the 5v power supply in the Arduino. The other terminal of the LDRs are connected in series with 10K ohm resistors and then grounded by connecting them to ground in Arduino. The grounded terminals are connected to analog ports of the Arduino (a0, a5). This is done to avoid flow of excess current in the analog ports.

After making the Arduino circuit we fix 2 lasers in front of the LDR so that the laser beam falls straight on the LDR. The basic idea here is we want to find the time taken for the moving object to cover the distance between the 2 lasers.

CODE LOGIC

The code check that if the 1st LDR was triggered, if it was triggered, a timer starts and the initial value is noted. When the second LDR is tripped we again note the value of timer, subtract the values to find total time and hence calculate the speed. In this we create our own function start calculation. This function checks when the 2nd LDR was triggered and does the necessary calculations to find the speed and the prints it. The code also counts the number of objects that have passed and display object number along with their speed. The triggering of LDRs are checked by seeing if the value of current falls beyond a specific value which is selected by knowing the value of current when laser is incident on the LDR and when there is no laser by trial and error need to be done by the user.

NOTE:
Please reffer the here attached report for complete details about the project for each and every detail of the project
