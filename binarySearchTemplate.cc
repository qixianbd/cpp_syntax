/*
 * binarySearchTemplate.cc
 *
 *  Created on: 2014年10月16日
 *      Author: qmwx
 */

#include <iostream>


template<typename T>
T max(T a, T b){
	return b > a ? b : a;
}

template<typename T>
bool less(T a, T b){
	return a < b;
}

template<typename T>
bool not_equal_to(T a, T b){
	return a != b;
}

template<typename T>
void swap(T& a, T& b){
	T c = a;
	a = b;
	b = c;
}


template<typename T>
int binarySearch(const T* array, int beg, int end, T v)
{
	int i = beg, j = end, mid = (i+j)/2;
	while(i <= j){
		mid = (i+j)/2;
		if(v == array[mid]){
			return mid;
		}
		else if(v < array[mid]){
			j = mid -1;
		}
		else{
			i = mid +1;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int pos = binarySearch(arr, 0, sizeof(arr)/sizeof(arr[0])-1, 2);
	std::cout << pos << std::endl;
	double d[] = {1.1, 2.2, 3.3, 4.4};
	pos = binarySearch(d, 0, sizeof(d)/sizeof(d[0])-1, 1.1);
	std::cout << pos << std::endl;

	int i = 3, j = 4;
	std::cout << max(i,j) << std::endl;
	std::cout << max(5.5, 6.6) << std::endl;

	std::cout << less(5, i) << std::endl;
	swap(i, j);
	std::cout << "i = " << i << ", j = " << j << std::endl;
	return 0;
}


