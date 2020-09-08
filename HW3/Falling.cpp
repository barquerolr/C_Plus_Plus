#include <iostream>
#include <string>
#include <cmath>
#include "Falling.h"
#define GRAVITY 32.2 //Gravity constant.
#define FPS2MPH 0.681818 //Feet per second constant.
#define dt  0.0001 //DT constant.

using namespace std;
	
Falling::Falling() //Default Constructor
{
	
};

double Falling::getTime()
{
	return this->time; // This will grab the time from the object.
};
	
void Falling::setTime(double time)
{
	this->time = time; // This will set the time in the object.
};
	
double Falling::getPosition()
{
	return this->position; // This will grab the position from the object.
};

void Falling::setPosition(double position)
{
	this->position = position; // This will set the position in the object.
};
	
double Falling::getVelocity()
{
	return this->velocity; //This will grab the velocirt in the object.
};

void Falling::moveOneClick()
{
	(this->velocity) += GRAVITY*DT; // This will increase the velocity as the object falls.
	(this->position) -= velocity*DT; //This will decrease the position of the object(as the object falls), until it reaches zero.
	(this->time) += DT; // This will increase the time as the object falls.
};