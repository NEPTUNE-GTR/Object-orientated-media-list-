# Object-orientated-media-list-
A c++ program that maintains lists of various media types(actors, movies, male, and female)



-a2q1.txt can be replaced with whatever .txt file is needed for testing purposes.

-I created a main.cpp just to start off the program and handle command line arguments, it is very basic. 

-For file input, I created a “fileinput” class to handle the text file.

-I created a pure virtual object class implementing only a .h file, and its two children actor and movie classes.

-I created a generic linkedlist class that accepts objects from the object class. That way the linkedlist class can accept any object 
as long as it’s a child class of the object class(that is pure virtual/abstract).

-For the node class I separated it from the linkedlist class for modularity.

-I also friended the Node class with the linkedList class so that the linkedlist class would be able to have access to the private 
data members of the Node class, that should be private as stated in the description of the assignment. 

