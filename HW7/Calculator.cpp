/****************************************************************************
* Project 7: pgm7.cpp - <description>
*
* Programmer: Luis Barquero
*
* Due Date: 12/9/2016
*
* EGRE 246 Fall 2016
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: Post fix calculator that will convert the user's input (which includes numbers and operators) into doubles and perform the necessary operation.
*
* Inputs: String that will be converted to a double.
*
* Output: The answer from the corresponding operation,
*
***************************************************************************/
#include <iostream>
#include <stack>
#include "Calculator.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <algorithm>
using namespace std;

Calculator::Calculator() //Default constructor.
{
	
};

void Calculator::add(double x, double y) //function that will add 2 numbers.
{
	this -> answer = x + y; //this -> answer to access private member answer. Adds up two numbers.
	cout << " ENTER: " << x << " + " << y << endl; 
};


void Calculator::add(double x) //function that will add a number to previously marked answer.
{
	stack<double> answer_stack;
	answer_stack.push(this -> answer); //places the answer at the previous answer at the top of the stack.
	answer_stack.pop(); //pops out the answer at the top of the stack.
	this -> answer = this -> answer + x; //performs the + operation and stores the answer in this -> answer.
	answer_stack.push(this -> answer); //pushes this -> answer back into the stack.
	cout << " ENTER: " << "+ " << x << endl;
};

void Calculator::sub(double x) // function that will subtract a number from a previous answer.
{
	stack<double> answer_stack;
	answer_stack.push(this -> answer); //places the answer at the previous answer at the top of the stack.
	answer_stack.pop(); //pops out the answer at the top of the stack.
	this -> answer = this -> answer - x; //performs the - operation and stores the answer in this -> answer.
	answer_stack.push(this-> answer); //pushes this -> answer back into the stack.
	cout << " ENTER: " << "- " << x << endl;
};

void Calculator::sub(double x, double y) // function that will subtract a number from a previous answer.
{
	stack<double> answer_stack;
	answer_stack.push(this -> answer); //places the answer at the previous answer at the top of the stack.
	answer_stack.pop(); //pops out the answer at the top of the stack.
	this -> answer = x - x; //performs the - operation and stores the answer in this -> answer.
	answer_stack.push(this-> answer); //pushes this -> answer back into the stack.
	cout << " ENTER: " << "- " << x << endl;
};

void Calculator::div(double x, double y) // function that will subtract a number from a previous answer.
{
	stack<double> answer_stack;
	answer_stack.push(this -> answer); //places the answer at the previous answer at the top of the stack.
	answer_stack.pop(); //pops out the answer at the top of the stack.
	this -> answer = x / y; //performs the - operation and stores the answer in this -> answer.
	answer_stack.push(this-> answer); //pushes this -> answer back into the stack.
	cout << " ENTER: " << "/ " << x << endl;
};

void Calculator::mult(double x, double y) // function that will subtract a number from a previous answer.
{
	stack<double> answer_stack;
	answer_stack.push(this -> answer); //places the answer at the previous answer at the top of the stack.
	answer_stack.pop(); //pops out the answer at the top of the stack.
	this -> answer = x * y; //performs the - operation and stores the answer in this -> answer.
	answer_stack.push(this-> answer); //pushes this -> answer back into the stack.
	cout << " ENTER: " << "* " << x << endl;
};

void Calculator::mult(double x) // function that will multiply a number to a previous answer.
{
	stack<double> answer_stack;
	answer_stack.push(this -> answer);  //places the answer at the previous answer at the top of the stack.
	answer_stack.pop(); //pops out the answer at the top of the stack.
	this -> answer = this -> answer * x; //performs the * operation and stores the answer in this -> answer.
	answer_stack.push(this-> answer); //pushes this -> answer back into the stack.
	cout << " ENTER: " << "* " << x << endl;
};

void Calculator::clear() //function that clears the inputs.
{
	answer_stack.push(0); //pushes this -> answer into the stack.
	cout << "CLEARED ANSWER" << endl;
};

void Calculator::enter(double x) //function that enters a number to the registry.
{
	answer_stack.push(x); //places this -> answer at the top of the stack.
	cout << " ENTER: " << x << endl;
};

void Calculator::div(double x) // function that divides the answer and the number x.
{
	stack<double> answer_stack;
	answer_stack.push(this -> answer); //pushes this -> answer into the stack.
	answer_stack.pop(); //pops out the answer at the top of the stack.
	this -> answer = (this -> answer) / (x); //performs the / operator and stores the answer in this -> answer.
	answer_stack.push(this-> answer); // pushes this -> answer into the stack.
	cout << " ENTER: " << "/ " << x << endl;
};

void Calculator:: prt() //print function.
{
	cout << "ANSWER: " << answer_stack.top() << endl;
	cout << "\n";
};

void Calculator:: mult()
{
	double a = 0; 
	double b = 0;
	a = answer_stack.top(); // sets a = to the top of the stack.
	answer_stack.pop();//pops out a;
	b = answer_stack.top();  // sets b = to the top of the stack.
	answer_stack.pop(); //pops out the top of the stack.
	answer_stack.push(a*b);// pushes the expression a*b.;
	cout << " ENTER: next on stack " << a << " * top of stack " << b << endl;
};

void Calculator:: add()
{
	double a = 0; 
	double b = 0;
	a = answer_stack.top(); // sets a = to the top of the stack.
	answer_stack.pop();//pops out a;
	b = answer_stack.top(); // sets b = to the top of the stack.
	answer_stack.push(a+b); // pushes the expression a+b.
	cout << " ENTER: next on stack " << a << " + top of stack " << b << endl;
};

void Calculator:: sub()
{
	double a = 0; 
	double b = 0;
	a = answer_stack.top(); // sets a = to the top of the stack.
	answer_stack.pop(); //pops out a;
	b = answer_stack.top(); // sets b = to the top of the stack.
	answer_stack.push(b-a); // pushes the expression b-a.
	cout << " ENTER: next on stack " << a << " - top of stack " << b << endl;
};

void Calculator:: div()
{
	double a = 0;
	double b = 0;
	a = answer_stack.top(); // sets a = to the top of the stack.
	answer_stack.pop(); //pops out a;
	b = answer_stack.top(); // sets b = to the top of the stack.
	answer_stack.pop(); //pops out b;
	answer_stack.push(b/a);// pushes the expression b/a.
	if (a == 0) // condition where if a == 0, it will output an error message, since dividing by zero is not allowed.
	{
		cout << "Error." << endl;
		exit(1);
	}
	cout << " ENTER: next on stack " << a << " / top of stack " << b << endl;
};