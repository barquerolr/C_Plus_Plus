/****************************************************************************
* Project 3: pgm3.cpp – simulating a falling object
*
* Programmer: Luis Barquero
*
* Due Date: information that you must provide
*
* EGRE 246 Fall 2016
*
* I pledge I neither gave nor received unauthorized aid on this program.
*
* Description: Project will take an initial height, and using Euler's Formula, it will output the time and the speed of impact in both ft/sec and mph.
*
* Inputs: Initial Height.
*
* Output: Time, impact speed(ft/sec), impact speed(mph).
*
***************************************************************************/
#include <iostream>
#include <string>
#include "Falling.h"
#include <iomanip>
#define GRAVITY 32.2 //Gravity constant.
#define FPS2MPH 0.681818 //Feet per second constant.
#define dt  0.00000000000000001 //DT constant.
using namespace std;

int main()
{
	cout << "\n\nProgram to calculate fall time and impact speed of" << endl;
	cout << "a falling object dropped from a specific height." << endl;
	Falling fallingObject; //Creates the object fallingObject that will be used to calculate the time and speed.
	double starting_height, time, speed, velocity, final_velocity; //Variables that will be used to iteratively calculate the time and impact speed.
	cout << "Enter initial height in feet: "; // User enters initial height.
	cin >> starting_height; 
	fallingObject.setTime(0.0); //Sets the object time to 0 because the object is dropped; therefore, the object will start at 0s.
	fallingObject.setPosition(starting_height); //Sets the object position to starting_height that will be used to perform the iterative method.
	
	
	while(fallingObject.getPosition() > 0) //In this while loop, the program will check for the object position, and if it is greater than 0, it will call on fallingObject.moveOneClick().
		fallingObject.moveOneClick(); 
	cout << "\nFalling Time = " << setprecision(8) << fallingObject.getTime() << endl; //This will output the falling time by calling fallingObject.getTime().
	cout << "Impact speed = " << setprecision(8) << fallingObject.getVelocity() << " feet/sec" << endl; //This will output the impact speed in ft/sec by calling fallingObject.getVelocity().
	cout << "Impact speed = " << setprecision(8) << fallingObject.getVelocity() * FPS2MPH << " mph" << endl; //This will convert the impact speed to MPH by multiplying by the constant 0.681818 and outputting the result.
}