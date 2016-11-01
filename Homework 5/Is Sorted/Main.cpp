/////////////////////
// Ben Morledge-Hampton
// CS 172-1
// 11-1-2016
// Homework 5
/////////////////////

// Pre-Processor Directives
#include <iostream>
#include <string>
using namespace std;

// A templated function which returns true if an array ( of either int, double, or string type) is sorted from least to greatest.
template <typename T>
bool isSorted(const T list[], int size) {

	// Using a for loop, check to see if the array is sorted from least to greatest by ensuring that each value is less than or equal to the next value in the array and return false if it isn't.
	for (int i = 0; i < (size - 1); i++) {
		if (!list[i] <= list[i + 1]) return false;
	}

	return true;

}


