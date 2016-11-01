/////////////////////
// Ben Morledge-Hampton
// CS 172-1
// 11-1-2016
// Homework 5
/////////////////////

//Pre-processor directives
#include <iostream>
#include <string>
using namespace std;


// A templated function that takes an array of int's, double's, or string's and outputs the index for the given search term or -1 if the term is not present in the array.
template <typename T>
int linearSearch(const T list[], T key, int arraySize) {

	// Run a for loop to search for the given term.
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i]) return i;
	}

	// If the search term was not found, return -1.
	return -1;
}


// Main function
int main() {

	// Create 3 arrays of size 5 (an int, double, and string array) with some stuff in each one to search through.
	int intList[5] = { 1,2,3,4,5 };
	double doubleList[5] = { 1.5,3,4.5,6,7.5 };
	string stringList[5] = { "Dad", "Bad", "Rad", "Sad", "Glad" };

	// The three terms to search for.
	int findInt = 4;
	double findDouble = 7.5;
	string findString = "Bad";

	// Search through each list for a specific term.  Display the results to the console.
	cout << "In the list of integers, " << findInt << " is present at index " << linearSearch(intList, findInt, 5) << "." << endl;
	cout << "In the list of doubles, " << findDouble << " is present at index " << linearSearch(doubleList, findDouble, 5) << "." << endl;
	cout << "In the list of strings, \"" << findString << "\" is present at index " << linearSearch(stringList, findString, 5) << "." << endl;
	

	// End function.  Everything is ok!
	return 0;

}