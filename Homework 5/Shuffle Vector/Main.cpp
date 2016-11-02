/////////////////////
// Ben Morledge-Hampton
// CS 172-1
// 11-1-2016
// Homework 5
/////////////////////

//Pre-processor directives
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

//Randomly shuffles a vector's contents.
template <typename T>
void shuffle(vector<T>& v) {

	int vectorElements = v.size // The number of elements the vector should have by the end of the program.
	T* shuffledArray = new T[v.size]; // A temporary array to store the vector's values in a shuffled order.
	int randPos; // A random position of those left in the vector that represents the next index to be moved into the shuffled array.


	// Store the vector's values in the temporary array.
	for (int i = 0; i < vectorElements; i++) {
		
		// Get a new random position from the remaining positions in the vector.
		randPos = rand() % v.size;

		// Move the element at the random position into the shuffled array and erase it from the vector.
		shuffledArray[i] = v[randompos];
		v.erase(randPos);

	}
	

	// Read the vector's values (now shuffled) from the array back into the vector!
	for (int i = 0; i < vectorElements; i++) {
		v.push_back(shuffledArray[i]);
	}

}


//Main function
int main() {



	// End function.  Everything is ok!
	return 0;

}