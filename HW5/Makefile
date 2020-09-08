Pgm5: Pgm5.o Calculator.o
	g++ Pgm5.o Calculator.o -o Pgm5

Pgm5.o: Pgm5.cpp Calc.h
	g++ -c Pgm5.cpp
	
Calculator.o: Calculator.cpp Calc.h
	g++ -c Calculator.cpp
	
clean: 
	rm *.o
	rm Pgm5