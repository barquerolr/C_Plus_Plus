/****************************************************************************
* Class Name: Calculator
*
* Description: The class represents the functions of a calculator.
			   For this program, we will be using those functions and storing the result in a stack.
*			   
* Programmer: Luis Barquero
* Revision Date: 11/15/2016
* Version Number: 
*
* Constructors
* Destructor
*
* public
* protected
* private
* member-function-name
* what it does (getter, setter, helper)
* with a short description
*
* public
* protected
* private
* member-variables-name
* how it is used in a short description
*
***************************************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include <stack>

#ifndef CALC_H
#define CALC_H

using namespace std;
class Calculator
{
	private: //Private members.
	double answer; 
	stack<double> answer_stack; // Stack the will be used to compute the calculator
	
	public: //Public members
	Calculator(); //Default constructor.
	void add(double, double); //function that will add two numbers.
	void sub(double, double); //function that subtracts two number.
	void div(double, double); //function that divides two numbers.
	void add(double); //function that will add a number to a previous number.
	void sub(double); //function that will subtract a number from a previous answer.
	void mult(double); //function that will multiply a number from a previous answer.
	void div(double); //function that will divide a number froma previous entry.
	void enter(double); //function that will enter a new number into the registry.
	void mult(); //Function that will muliply the two top members in the stack.
	void div(); // Function that will divide the two top members in the stack.
	void prt(); //print function.
	void clear(); //clear function.
	

    

	
};
#endif