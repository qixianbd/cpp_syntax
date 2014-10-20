/*
 * learn_override_new.cc
 *
 *  Created on: 2014年10月20日
 *      Author: qmwx
 */
#include <iostream>
#include <limits.h>
#include <new>
//using namespace std;

inline void my_handler(){
	printf("keyming: love you!\n");
	exit(1) ;
}


void* operator new(size_t siz){
	std::new_handler nh = my_handler;
	std::set_new_handler(my_handler);
	void* p = malloc(siz);
	printf("In my own new operator \n");
	if(p){
		return p;
	}
	if(nh){
		nh();
	}
	else{
		printf("Come To here\n");
	}
	return 0;
}


void* operator new(size_t siz, double f){
	std::new_handler nh = my_handler;
	std::set_new_handler(my_handler);
	void* p = malloc(siz);
	printf("In my own new operator, f = %f\n", f);
	if(p){
		return p;
	}
	if(nh){
		nh();
	}
	else{
		printf("Come To here\n");
	}
	return 0;
}
int main()
{
	std::set_new_handler(my_handler);
	long size = LONG_MAX;
	int* arr = new (1.21) int;

	int* b = new int;
	return 0;
}



