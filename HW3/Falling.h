#include <iostream>
#include <string>
#include <cmath>

#ifndef FALLING_H
#define GREETING_H
#define GRAVITY 32.2 //Gravity constant.
#define FPS2MPH 0.681818 //Feet per second constant.
#define DT  0.0001 //DT constant.

using namespace std;
class Falling
{
	private: //Private members.
	double time; 
	double position;
	double velocity;
	
	public: //Public members
	Falling(); //Default constructor.
	double getTime(); //Grabs time from object.
	void setTime(double); //Sets time on object.
	double getPosition(); //Grabs postion from object.
	void setPosition(double); //Sets position on object.
	double getVelocity(); //Gets velocity from object. 
	void moveOneClick(); //Function that applies Euler's Formula/Method to acquire the velocity.
};
#endif