#include <iostream>
#include "Calculator.h"

int main(void)
{
  // Create an instance (object) of the Calculator class
  Calculator calc;
  stack<double> math;
  // ENTER 4  + 1.4  ENTER 2.7  - 1  *  =  9.18 
  calc.clear();
  calc.enter(4);
  calc.prt();
  calc.add(1.4);
  calc.prt();
  calc.enter(2.7);
  calc.prt();
  calc.sub(1);
  calc.prt();
  calc.mult();
  calc.prt();

  // ENTER 6  + 7  * 5  + 4  * 3  =  207
  calc.clear();
  calc.enter(6);
  calc.prt();
  calc.add(7);
  calc.prt();
  calc.mult(5);
  calc.prt();
  calc.add(4);
  calc.prt();
  calc.mult(3);
  calc.prt();
 

  // ENTER 42  / .09  = 466.667
  calc.clear();
  calc.enter(42);
  calc.prt();
  calc.div(0.09);
  calc.prt();


  // ENTER 4  + 5  ENTER 6   + 7  /  = 0.692308
  calc.clear();
  calc.enter(4);
  calc.prt();
  calc.add(5);
  calc.prt();
  calc.enter(6);
  calc.prt();
  calc.add(7);
  calc.prt();
  calc.div();
  calc.prt();	
  
}
	
