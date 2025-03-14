#include "array.hpp"

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n]();
	_size = n;
}

template <typename T>
Array<T>::Array(const Array& other)
{
	_array = new T[other._size]();
	_size = other._size;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _array;
		_array = new T[other._size]();//alloc mem
		_size = other._size;
		for (unsigned int i = 0; i < _size; i++)//copy elem
			_array[i] = other._array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw OOBException();
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw OOBException();
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
const char* Array<T>::OOBException::what() const throw()
{
	return "Index out of bounds";
}
