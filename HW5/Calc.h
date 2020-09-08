#include <iostream>
#include <string>
#include <cmath>

#ifndef CALC_H
#define CALC_H

using namespace std;
class Calculator
{
	private: //Private members.
	double num1;
	double num2;
	double num3;
	double total;
	double total2;
	double total3;
	double total4;
	double total5;
	double total6;
	double total7;
	double total8;
	double total9;
	double entering;
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double o;
	double st;
	
	public: //Public members
	Calculator(); //Default constructor.
	void add(double, double);
	void sub(double, double);
	void div(double, double);
	void add(double);
	void sub(double);
	void mult(double);
	void div(double);
	void enter(double);
	void prt();
	void clear();
	
};
#endif