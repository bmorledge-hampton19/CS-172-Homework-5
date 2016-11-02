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

	int vectorElements = (int)v.size(); // The number of elements the vector should have by the end of the program.
	T* shuffledArray = new T[v.size()]; // A temporary array to store the vector's values in a shuffled order.
	int randPos; // A random position of those left in the vector that represents the next index to be moved into the shuffled array.

	// Store the vector's values in the temporary array.
	for (int i = 0; i < vectorElements; i++) {
		
		// Get a new random position from the remaining positions in the vector.
		randPos = rand() % v.size();

		// Move the element at the random position into the shuffled array and erase it from the vector.
		shuffledArray[i] = v[randPos];
		// This for loop moves every element above the one being removed down one position before popping the top position.
		for (int z = randPos; z < (vectorElements-1-i); z++) {
			v[z] = v[z + 1];
		}
		v.pop_back();

	}
	

	// Read the vector's values (now shuffled) from the array back into the vector!
	for (int i = 0; i < vectorElements; i++) {
		v.push_back(shuffledArray[i]);
	}

	// Delete the dynamically allocated array.
	delete[] shuffledArray;

}


//Main function
int main() {

	// Seed the RNG with the internal clock.
	srand((unsigned)time(NULL));

	// Create a vector of 10 random integers from 1-50 and shuffle it!  Display the vector before and after the shuffle.

	vector<int> cards(10);

	cout << "The vector before the shuffle: " << endl;

	// Seed and display it!
	for (int i = 0; i < 10; i++) {
		cards[i] = rand() % 50 + 1;
		cout << cards[i] << endl;
	}
	cout << endl;

	// Shuffle it!
	shuffle(cards);

	cout << "The vector after the shuffle: " << endl;

	// Display it again!
	for (int i = 0; i < 10; i++) {
		cout << cards[i] << endl;
	}
	cout << endl;

	// End function.  Everything is ok!
	return 0;

}