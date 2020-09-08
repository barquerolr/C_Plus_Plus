pgm3: pgm3.o Falling.o
	g++ pgm3.o Falling.o -o pgm3

pgm3.o: pgm3.cpp Falling.h
	g++ -c pgm3.cpp
	
Falling.o: Falling.cpp Falling.h
	g++ -c Falling.cpp
	
clean: 
	rm *.o
	rm pgm3