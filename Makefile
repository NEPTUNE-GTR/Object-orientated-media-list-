test: main.o fileInput.o 
	g++ main.o fileInput.o -o test

main.o: main.cpp fileInput.h
	g++ -c main.cpp

fileInput.o: fileInput.h Actor.h fileInput.cpp 
	g++ -c Actor.o fileInput.cpp
	
Actor.o: Actor.cpp Actor.h Object.h
	g++ -c Actor.cpp
	
clean:
	rm *.o test




