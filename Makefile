test: main.o fileInput.o
	g++ main.o fileInput.o -o test

main.o: main.cpp fileInput.h
	g++ -c main.cpp

fileInput.o: fileInput.cpp fileInput.h
	g++ -c fileInput.cpp

clean:
	rm *.o test




