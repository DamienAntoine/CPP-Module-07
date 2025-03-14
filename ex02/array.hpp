#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array() : _array(0), _size(0) {}
		Array(unsigned int n);
		Array(const Array& other);
		~Array()
		{
			delete[] _array;
		}

		Array&		operator=(const Array& other);
		T&			operator[](unsigned int index);
		const T&	operator[](unsigned int index) const;

		unsigned int	size() const;

		class OOBException : public std::exception
		{
			public:
			virtual const char* what() const throw();
		};
};

#include "array.tpp"

#endif
