#include <iostream>
#include "Calculator.h"

int main(void)
{
  // Create an instance (object) of the Calculator class
  Calculator calc;

  // Add two arguments and store on the answer stack
  calc.add(1.4, 2.7);
  calc.prt();

  // Add argument to answer and store on the answer stack
  calc + 4;
  calc.prt();
	
  // Subtract two arguments and store on the answer stack
  calc.sub(5.6, 3.4);
  calc.prt();
	
  // Subtract argument from answer and store on the answer stack
  calc - 1;
  calc.prt();
	
  // Multiply answer by argument and store on the answer stack
  calc * 3;
  calc.prt();
	
  // Clear all values from the answer stack
  calc.clear();
  calc.prt();
  
  // Enter a single value onto the answer stack
  calc.enter(42);
  calc.prt();
	
  // Add argument to answer and store on the answer stack
  calc + 10;
  calc.prt();
	
  // Divide answer by argument and store on the answer stack
  calc / 2;
  calc.prt();
	
  // Divide arguments and store on the answer stack
  calc.div(33.5,4);
  calc.prt();
}
	
