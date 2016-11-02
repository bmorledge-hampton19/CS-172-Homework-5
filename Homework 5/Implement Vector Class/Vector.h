#pragma once

template<typename T>
class Vector {

public:

	Vector(); //Constructs an empty vector with the specified element type.
	Vector(int size); //Constructs a vector with the initial size, filled with default values.
	Vector(int size, T defaultValue); //Constructs a vector with the initial size, filled with specified values.

	void push_vack(T element); //Appends the element in this vector
	void pop_back(); //Removes the last element from this vector
	unsigned size() const; //Returns the number of elements in this vector;
	T at(int index) const; //Returns the element at the specified index in this vector.
	bool empty() const; //Returns true if this vector is empty.
	void clear(); //Removes all elements from this vector.
	void swap(vector v2); //Swaps the contents of this vector with the specified vector

};

template<typename T>
inline Vector<T>::Vector()
{
}

template<typename T>
inline Vector<T>::Vector(int size)
{
}

template<typename T>
inline Vector<T>::Vector(int size, T defaultValue)
{
}

template<typename T>
inline void Vector<T>::push_vack(T element)
{
}

template<typename T>
inline void Vector<T>::pop_back()
{
}

template<typename T>
inline unsigned Vector<T>::size() const
{
	return 0;
}

template<typename T>
inline T Vector<T>::at(int index) const
{
	return T();
}

template<typename T>
inline bool Vector<T>::empty() const
{
	return false;
}

template<typename T>
inline void Vector<T>::clear()
{
}

template<typename T>
inline void Vector<T>::swap(vector v2)
{
}