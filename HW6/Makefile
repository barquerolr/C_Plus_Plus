All: Pgm6 Pgm5A Pgm5B
Pgm6: Pgm6.o Calculator.o
	g++ Pgm6.o Calculator.o -o Pgm6

Pgm6.o: Pgm6.cpp Calculator.h
	g++ -c Pgm6.cpp
	
Calculator.o: Calculator.cpp Calculator.h
	g++ -c Calculator.cpp
	
Pgm5A: Pgm5A.o Calculator5A.o
	g++ Pgm5A.o Calculator5A.o -o Pgm5A

Pgm5.o: Pgm5A.cpp Calculator5A.h
	g++ -c Pgm5A.cpp
	
Calculator5A.o: Calculator5A.cpp Calculator5A.h
	g++ -c Calculator5A.cpp
	
Pgm5B: Pgm5B.o Calculator5B.o
	g++ Pgm5B.o Calculator5B.o -o Pgm5B

Pgm5B.o: Pgm5B.cpp Calculator5B.h
	g++ -c Pgm5B.cpp
	
Calculator5B.o: Calculator5B.cpp Calculator5B.h
	g++ -c Calculator5B.cpp
	
clean: 
	rm *.o
	rm Pgm56