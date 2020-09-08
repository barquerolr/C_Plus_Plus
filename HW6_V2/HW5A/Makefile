Pgm5A: Pgm5A.o Calculator.o
	g++ Pgm5A.o Calculator.o -o Pgm5A

Pgm5.o: Pgm5A.cpp Calculator5A.h
	g++ -c Pgm5A.cpp
	
Calculator.o: Calculator5A.cpp Calculator5A.h
	g++ -c Calculator.cpp
	
clean: 
	rm *.o
	rm Pgm5A