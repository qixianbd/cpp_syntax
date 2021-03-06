CXX= g++
CC= g++
CFLAGS=  -c -g -Wall 
CXXFLAGS= -c -g -Wall 
LANG=en_US

.PHONY:all
all:binarySearchTemplate learn_override_new simpleMem


binarySearchTemplate:binarySearchTemplate.o
	g++ -o $@ $^
binarySearchTemplate.o:binarySearchTemplate.cc

learn_override_new:learn_override_new.o
	g++ -o $@ $^
learn_override_new.o:learn_override_new.cc

simpleMem:simpleMem.o
	g++ -o $@ $^
simpleMem.o:simpleMem.cc simpleMem.h


.PHONY:clean
clean: 
	-rm  -f *.o 