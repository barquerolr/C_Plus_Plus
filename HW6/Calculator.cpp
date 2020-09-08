#include <iostream>
#include "Calculator.h"
#include <stack>
#include <iomanip>
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
	stack<double> answer_stack;
	this -> answer = 0; // sets the answer = 0 to clear inputs.
	answer_stack.push(this-> answer); //pushes this -> answer into the stack.
	cout << "CLEARED ANSWER" << endl;
};

void Calculator::enter(double x) //function that enters a number to the registry.
{
	stack<double> answer_stack;
	this -> answer = x; // enters the defined number into the registry.
	answer_stack.push(this-> answer); // pushes this -> answer into the stack.
	answer_stack.top(); //places this -> answer at the top of the stack.
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
	cout << "ANSWER: " << answer << endl;
	cout << "\n";
};

void Calculator:: mult()
{
	stack<double> answer_stack;
	double a = 0; 
	answer_stack.push(this -> answer); //pushes this -> answer into the stack.
	a = 5.4; // sets = to the top of the stack.
	answer_stack.pop(); //pops out the top of the stack.
	this -> answer = this -> answer * a; //multiplies the top two numbers in the stack and sets the answer in this -> answer.
	answer_stack.push(this -> answer); //pushes this -> answer into the stack.
	cout << " ENTER: next on stack " << a << " * top of stack " << 1.7 << endl;
};

void Calculator:: div()
{
	stack<double> answer_stack;
	double a = 0;
	double b = 0;
	answer_stack.push(this -> answer); //pushes this -> answer into the stack.
	b = this -> answer; // sets b = this -> answer.
	a = 9; // sets a = to the top of the stack.
	answer_stack.pop(); //pops out a;
	this -> answer = a / this -> answer; // divides the top two numbers in the stack and sets the answer in this -> answer.
	answer_stack.push(this -> answer); //pushes this -> answer into the stack.
	cout << " ENTER: next on stack " << a << " * top of stack " << b << endl;
};