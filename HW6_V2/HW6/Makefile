Pgm6: Pgm6.o Calculator.o
	g++ Pgm6.o Calculator.o -o Pgm6

Pgm6.o: Pgm6.cpp Calculator.h
	g++ -c Pgm6.cpp
	
Calculator.o: Calculator.cpp Calculator.h
	g++ -c Calculator.cpp
	
clean: 
	rm *.o
	rm Pgm6