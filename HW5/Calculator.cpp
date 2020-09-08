#include <iostream>
#include "Calc.h"
using namespace std;

Calculator::Calculator()
{
	
};

void Calculator::add(double x, double y)
{
	num1 = x;
	num2 = y;
	this -> num1 = x;
	this -> num2 = y;
	this -> total = this -> num1 + this -> num2; 
	
//	total = num1 + num2;
};

void Calculator::add(double z)
{
	num3 = z;
	this -> num3 = z;
	this -> total2 = this -> total + this -> num3;
	
	st = z;
	this -> st = z;
	this -> total7 = this -> entering + this -> st;
};

void Calculator::sub(double n, double m)
{
	a = n;
	b = m;
	this -> a = n;
	this -> b = m;
	this -> total3 = this -> a - this -> b;
};

void Calculator::sub(double p)
{
	c = p;
	this -> c = p;
	this -> total4 = this -> total3 - this -> c;
};

void Calculator::mult(double v)
{
	d = v;
	this -> d = v;
	this -> total5 = this -> total4 * this -> d;
};

void Calculator::div(double u, double w)
{
	f = u;
	o = w;
	this -> f = u;
	this -> o = w;
	this -> total9 = (this -> f) / (this -> o);
};


void Calculator::div(double s)
{
	e = s;
	this -> e = s;
	this -> total8 = (this -> total7) / (this -> e);
};

void Calculator::enter(double k)
{
	entering = k;
	this -> entering = k;
};

void Calculator:: prt()
{
	cout << "Total: " << total << endl;
	cout << "Total: " << total2 << endl;
	cout << "Total: " << total3 << endl;
	cout << "Total: " << total4 << endl;
	cout << "Total: " << total5 << endl;
	cout << "Total: " << total6 << endl;
	cout << "Total: " << entering << endl;
	cout << "Total: " << total7 << endl;
	cout << "Total: " << total8 << endl;
	cout << "Total: " << total9 << endl;
};

void Calculator::clear()
{
	this -> total6 = 0;
};



















