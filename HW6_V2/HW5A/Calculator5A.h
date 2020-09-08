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
	stack<double> math;
	
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
	void prt(); //print function.
	void clear(); //clear function.
	void operator+(double);
	void operator-(double);
	void operator*(double);
	void operator/(double);
	
	friend ostream& operator<< (ostream& os, const Calculator& ot); //function that overloads the << operator.
    

	
};
#endif