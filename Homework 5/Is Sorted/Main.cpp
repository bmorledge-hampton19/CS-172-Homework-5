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
		if ( !(list[i] <= list[i + 1]) ) return false;
	}

	return true;

}

// Main Function

int main() {

	// Create 3 arrays of size 5 (an int, double, and string array) that are properly sorted.
	int sortedIntList[5] = { 1,2,3,3,5 };
	double sortedDoubleList[5] = { 1.5,3,4.5,6,7.5 };
	string sortedStringList[5] = { "Bad", "Fad", "Had", "Sad", "Tad" };

	// Create 3 arrays of size 5 (an int, double, and string array) that are not properly sorted.
	int unsortedIntList[5] = { 4,6,2,1,1 };
	double unsortedDoubleList[5] = { .6, .3, .4, .5, .6 };
	string unsortedStringList[5] = { "Dad", "Bad", "Rad", "Sad", "Glad" };

	// Test the function with the six above arrays.
	cout << boolalpha;

	cout << "The first array of integers is properly sorted: " << isSorted(sortedIntList, 5) << endl;
	cout << "The first array of doubles is properly sorted: " << isSorted(sortedDoubleList, 5) << endl;
	cout << "The first array of strings is properly sorted: " << isSorted(sortedStringList, 5) << endl << endl;

	cout << "The second array of integers is properly sorted: " << isSorted(unsortedIntList, 5) << endl;
	cout << "The second array of doubles is properly sorted: " << isSorted(unsortedDoubleList, 5) << endl;
	cout << "The second array of strings is properly sorted: " << isSorted(unsortedStringList, 5) << endl << endl;


	// End function.  Everything is ok!
	return 0;

}
