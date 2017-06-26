test: main.o fileInput.o
	g++ main.o fileInput.o -o test

main.o: main.cpp fileInput.h
	g++ -c main.cpp

fileInput.o: fileInput.cpp fileInput.h
	g++ -c fileInput.cpp
	
Object.o: Object.cpp fileInput.h
	g++ -c Object.cpp

clean:
	rm *.o test




