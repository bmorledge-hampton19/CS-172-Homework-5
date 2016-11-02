/////////////////////
// Ben Morledge-Hampton
// CS 172-1
// 11-1-2016
// Homework 5
/////////////////////

//Pre-processor directives
#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;

//Main function
int main() {

	// Create three vectors, 2 with integers and one with strings.  Do stuff with them to test the implementation of the personally created class!
	vector <int> * v1 = new vector <int>();
	vector <int> * v2 = new vector <int>(5, 26);
	vector <string> * v3 = new vector <string>(5);

	// Push values onto the empty vector if it is really empty.
	if (v1->empty()) {
		v1->push_back(1);
		v1->push_back(2);
		v1->push_back(3);
	}

	// Push values onto the string vector.
	v3->push_back("Hello");
	v3->push_back("World");

	// Pop off a value on both v2 and v3.
	v2->pop_back();
	v3->pop_back();

	//Display v1's contents.
	for (int i = 0; (unsigned)i < v1->size(); i++) {
		cout << v1->at(i) << endl;
	}
	cout << endl;

	// Swap v1 and v2.
	v1->swap(*v2);

	//Display v1's contents.
	for (int i = 0; (unsigned)i < v1->size(); i++) {
		cout << v1->at(i) << endl;
	}
	cout << endl;

	// Clear v2 and attempt to display its first 2 values.
	v2->clear();
	for (int i = 0; i < 2; i++) {
		cout << v2->at(i) << endl;
	}
	cout << endl;

	// Display v3's contents.
	for (int i = 0; (unsigned)i < v3->size(); i++) {
		cout << v3->at(i) << endl;
	}
	cout << endl;

	
	// Delete stuff.
	delete v1;
	delete v2;
	delete v3;


	// End function.  Everything is ok!
	return 0;

}