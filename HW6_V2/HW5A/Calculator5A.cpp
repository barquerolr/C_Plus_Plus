#include <iostream>
#include "Calculator.h"
#include <stack>
#include <iomanip>
using namespace std;

Calculator::Calculator()
{
	
};

void Calculator::add(double x, double y) //function that will add 2 numbers.
{
	this -> answer = x + y; //this -> answer to access private member answer. Adds up two numbers.
	cout << " ENTER: " << x << " + " << y << endl; 
};


void Calculator::add(double x) //function that will add a number to previously marked answer.
{
	stack<double> math;
	math.push(x);
	this -> answer = this -> answer + x; //this-> answer is already and answer, and we are adding x to that answer.
	math.push(this->answer);
	cout << " ENTER: " << "+ " << x << endl;
};

void Calculator::operator+(double x)
{
	stack<double> math;
	math.push(x);
	this -> answer = this -> answer + x;
	math.push(this-> answer);
	cout << " ENTER: " << "+ " << x << endl;
};

void Calculator::operator-(double x)
{
	stack<double> math;
	math.push(x);
	this -> answer = this -> answer - x;
	math.push(this-> answer);
	cout << " ENTER: " << "- " << x << endl;
};

void Calculator::operator*(double x)
{
	stack<double> math;
	math.push(x);
	this -> answer = this -> answer * x;
	math.push(this-> answer);
	cout << " ENTER: " << "* " << x << endl;
};

void Calculator::operator/(double x)
{
	stack<double> math;
	math.push(x);
	this -> answer = (this -> answer) / x;
	math.push(this-> answer);
	cout << " ENTER: " << "/ " << x << endl;	
};
void Calculator::sub(double x, double y) //function that will subtract two numbers.
{
	stack<double> math;
	math.push(x);
	math.push(y);
	this -> answer = x - y; //answer will be the subtraction of the two numbers.
	math.push(this-> answer);
	cout << " ENTER: " << x << " - " << y << endl;
};

void Calculator::sub(double x) // function that will subtract a number from a previous answer.
{
	stack<double> math;
	math.push(x);
	this -> answer = this -> answer - x; // subtracts x from the previous answer.
	math.push(this-> answer);
	cout << " ENTER: " << "- " << x << endl;
};

void Calculator::mult(double x) // function that will multiply a number to a previous answer.
{
	stack<double> math;
	math.push(x);
	this -> answer = this -> answer * x; // multiplies x to the previous answer.
	math.push(this-> answer);
	cout << " ENTER: " << "* " << x << endl;
};

void Calculator::clear() //function that clears the inputs.
{
	stack<double> math;
	this -> answer = 0; // sets the answer = 0 to clear inputs.
	math.push(this-> answer);
	cout << "CLEARED ANSWER" << endl;
};

void Calculator::enter(double x) //function that enters a number to the registry.
{
	stack<double> math;
	math.push(x);
	this -> answer = x; // enters the defined number into the registry.
	math.push(this-> answer);
	cout << " ENTER: " << x << endl;
};

void Calculator::div(double x) // function that divides the answer and the number x.
{
	stack<double> math;
	math.push(x);
	this -> answer = (this -> answer) / (x); // dividea x from answer.
	math.push(this-> answer);
	cout << " ENTER: " << "/ " << x << endl;
};

void Calculator::div(double x, double y) // function that divides two numbers.
{
	stack<double> math;
	math.push(x);
	math.push(y);
	this -> answer = (x) / (y); // divides two numbers.
	math.push(this-> answer);
	cout << " ENTER: " << x << " / " << y << endl;
};

void Calculator:: prt() //print function.
{
	cout << "ANSWER: " << answer << endl;
	cout << "\n";
};


ostream& operator<<(ostream& os, const Calculator& ot) //overloads the << operator.
{
	os << ot.answer;
	return os;
}


 