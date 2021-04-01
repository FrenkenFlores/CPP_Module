#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
	T *_array;
	size_t _size;
	struct SegmentationFaultException : public std::exception {
		const char * what() const throw() {
			return ("SegmentationFaultException");
		}
	};
public:
	Array() : _array(NULL), _size(0) {return;}

	Array(const unsigned int n) : _array(NULL), _size(n) {
		_array = new T[_size]();
		return;
	}

	Array(const Array & src) {
		*this = src;
		return;
	}

	Array & operator=(const Array & rhs) {
		if (_size > 0)
			delete[] _array;
		_size = rhs._size;
		_array = new T[rhs._size]();
		for (size_t i = 0; i < rhs._size; ++i) {
			_array[i] = rhs._array[i];
		}
		return *this;
	}

	~Array() {
		delete[] _array;
		return;
	}

	T & operator[](size_t const index) const{
		if (index >= _size)
			throw SegmentationFaultException();
		return _array[index];
	}

	size_t size(void) const{
		return _size;
	}
};


#endif