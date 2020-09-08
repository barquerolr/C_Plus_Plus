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
bool str2double(string&, double&);

int main()
{
	Calculator calc; 
	string ptr; //variable that represents the user's input.
	double convert; //variable that will be used in the conversion of the string to the double.
	char c; // variable used to set the while loop.
	cout << "RPN calculator using prefix notation" << endl;
	while(c == 0) //while loop condition.
	{
		cout << "NEXT: ";
		cin >> ptr; // extracts the user's input.
		cout << "\n";
		if(str2double(ptr,convert)) //string to double function.
		{
			calc.enter(convert); //if the input is a double, it enters the double into the stack and prints them.
			calc.prt(); //calls the print function.
		}
		
		if(ptr == "+") //if the user's string involves a + operator
		{
			calc.add(); //adds the two numbers and places them onto the stack.
			calc.prt(); // calls the print function.
		}
		else if (ptr == "-")//if the user's string involves a - operator
		{
			calc.sub();//subtracts the two numbers and places them onto the stack.
			calc.prt();//calls the print function.
		}
		else if(ptr == "*") //if the user's string involves a * operator
		{
			calc.mult();//multiplies the two numbers and places them onto the stack.
			calc.prt();//calls the print function.
		}
		else if(ptr == "/")//if the user's string involves a +/ operator
		{
			calc.div();//divides the two numbers and places them onto the stack.
			calc.prt();//calls the print function.
		}
		else if (ptr == "x") //if the user's string involves a lowercase x
		{
			cout << "Goodbye!" << endl; // will output goodbye.
			exit(1); //exits the program.
		}
		
		else if (ptr == "X") //if the user's string involves an uppercase x
		{
			cout << "Goodbye!" << endl; //will output goodbye
			exit(1); //exits the program.
		}
		
		else if ((ptr == "c") || (ptr == "C")) //if the user's string involves an upper or lowercase c/
		{
			calc.clear(); // calls the clear function (which clears the stack.)
			calc.prt();//calls the print function.
		}
		else if (ptr == "?")//if the user's string involves a ? symbol, will output an error message.
		{
			cout << "Invalid entry.";
			cout << "\n"; 
		}
		else if (ptr == "!") //if the user's string involves a ! symbol, will output an error message.
		{
			cout << "Invalud entry.";
			cout << "\n";
		}
		else if (ptr == "$") //if the user's string involves a $ symbol, will output an error message.
		{
			cout << "Invalid entry";
			cout << "\n";
		}
		else if (ptr == "#") //if the user's string involves a # symbol, will output an error message.
		{
			cout << "Invalid entry";
			cout << "\n";
		}
		else if (ptr == "@") //if the user's string involves a @ symbol, will output an error message.
		{
			cout << "Invalid Entry";
			cout << "\n";
		}
		else if (ptr == "&") //if the user's string involves a & symbol, will output an error message.
		{
			cout << "Invalid Entry";
			cout << "\n";
		}
		else if (ptr == "%") //if the user's string involves a %symbol, will output an error message.
		{
			cout << "Invalid Entry";
			cout << "\n";
		}
		else if (ptr == "(")//if the user's string involves a ( symbol, will output an error message.
		{
			cout << "Invalid Entry";
			cout << "\n";
		}
		else if (ptr == ")")//if the user's string involves a ) symbol, will output an error message.
		{
			cout << "Invalid Entry";
			cout << "\n";
		}
		else ////if the user's string involves anything else, it will output an error message.
		{
			cout << "Invalid Entry";
			cout << "\n";
		}
	}
}

bool str2double(string& term, double& operand)
{
  char* ptr;
  // conversion begins at term string address 0 and on success
  // pointer ptr is advanced to end of numeric portion of content
  operand = strtod(term.c_str(), &ptr);
  // return boolean value of comparisonn 
  // addr stored in ptr to addr of term string
  return (ptr == (term.c_str()+term.length()));
}
