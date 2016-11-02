#pragma once

// Pre-Processor Directives
#include <string>
using namespace std;

template<typename T>
class vector {

private:
	T* list; // The pointer that will be used to create the dynamic array that is the basis for the class
	unsigned size; // The number of elements in the vector.
	unsigned maxSize; // The current capacity of the array.  Helps to realize when the array size must be increased.

	void doubleCapacity(); // Doubles the maxsize of the array, filling new spots with 0's.

public:

	vector(); //Constructs an empty vector with the specified element type.
	vector(int size); //Constructs a vector with the initial size, filled with default values.  Size must be greater than 0, or it defaults to 10. maxSize = size.
	vector(int size, T defaultValue); //Constructs a vector with the initial size, filled with specified values. Size must be greater than 0, or it defaults to 10.  maxSize = size.
	~vector(); // The destructor for the class.  Reclaims memory allocated to the array "list".

	void push_back(T element); //Appends the element in this vector
	void pop_back(); //Removes the last element from this vector
	unsigned size() const; //Returns the number of elements in this vector;
	T at(int index) const; //Returns the element at the specified index in this vector, as long as it is less than the current size.  Otherwise, it returns 0.
	bool empty() const; //Returns true if this vector is empty.
	void clear(); //Removes all elements from this vector.
	void swap(vector v2); //Swaps the contents of this vector with the specified vector.

};

template<typename T>
inline vector<T>::vector()
{
	size = 0;
	maxSize = 10;
	list = new list[10];
}

template<typename T>
inline vector<T>::vector(int size)
{
	if (size > 0) this->size = size;
	else size = 10;

	maxSize = this->size;

	list = new list[1];

	// Use a for loop to assign the default value (0) to each index in the vector.
	for (int i = 0; i < size; i++) {
		list[i] = 0;
	}

}

template<typename T>
inline vector<T>::vector(int size, T defaultValue)
{

	if (size > 0) this->size = size;
	else size = 10;

	maxSize = this->size;

	list = new list[1];

	// Use a for loop to assign the default value to each index in the vector.
	for (int i = 0; i < size; i++) {
		list[i] = defaultValue;
	}

}

template<typename T>
inline vector<T>::~vector()
{

	delete[] list;

}

template<typename T>
inline void vector<T>::push_back(T element)
{

	// Double the array's capacity if there is no room available to add the new element.
	if (size = maxSize) doubleCapacity();

	// Add in the new element and increment size.
	list[size] = element;
	size++;

}

template<typename T>
inline void vector<T>::pop_back()
{

	// Set the last value to 0, and decrement size.
	list[size] = 0;


}

template<typename T>
inline unsigned vector<T>::size() const
{
	return size;
}

template<typename T>
inline T vector<T>::at(int index) const
{
	if (index < size) return list[index];
	else return 0;
}

template<typename T>
inline bool vector<T>::empty() const
{
	if (size = 0) return true;
	else return false;
}

template<typename T>
inline void vector<T>::clear()
{
	// Run a for loop to set everything in the loop to 0 and set size as 0.

	for (int i = 0; i < size; i++) {
		list[i] = 0;
	}

	size = 0;
}

template<typename T>
inline void vector<T>::swap(vector v2)
{

	unsigned greaterSize = size; // The size value for the vector with the most elements.  Defaults to the size of the vector calling the function.

	// Check to make sure that the swap won't exceed either vector's max size, expanding if necesarry.
	if (size < v2.size) {

		while (maxSize < v2.size()) doubleCapacity();
		// Be sure to change the greater Size to the size of v2.
		greaterSize = v2.size;

	}
	else if (v2.size < size) {

		while (v2.maxSize < size) v2.doubleCapacity();

	}

	vector vtemp(greaterSize); // A temporary vector to hold values during the swap process.

	 // Using a for loop, read values into the temporary vector from the first vector, fill the first vector with values from the second, and finally fill the second vector with values from the temp.
	for (int i = 0; i < greaterSize; i++) {

		vtemp.list[i] = list[i];
		list[i] = v2.list[i];
		v2.list[i] = vtemp.list[i];

	}

	// Delete the temporary array.
	delete vtemp;

}

template<typename T>
inline void vector<T>::doubleCapacity() {

	T* doubledList = new T[size * 2]; // Allocate memory to the heap for the new doubled array.

	// Insert the values from the orignal array into the new array with a for loop.
	for (int i = 0; i < size; i++) {
		doubledList[i] = list[i];
	}

	// Set all new spaces to 0.
	for (int i = size; i < 2 * size; i++) {
		doubledList[i] = 0;
	}

	// Delete the old array, update maxSize, and return the doubled array!
	delete[] list;
	maxSize *= 2;
	list = doubledList;

}
