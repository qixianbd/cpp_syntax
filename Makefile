CXX= g++
CC= g++
CFLAGS=  -c -g -Wall 
CXXFLAGS= -c -g -Wall 
LANG=en_US

.PHONY:all
all:binarySearchTemplate


binarySearchTemplate:binarySearchTemplate.o
	g++ -o $@ $^
binarySearchTemplate.o:binarySearchTemplate.cc

.PHONY:clean
clean: 
	-rm  -f *.o 