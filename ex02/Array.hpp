#include <iostream>
#include <algorithm> // For std::copy
#include <stdexcept> // For std::out_of_range

template<typename T>
class Array
{
private:
    T *_element;
    unsigned int _size;

public:
    Array();
    Array(unsigned int size);
    Array(const Array<T> &cpy);
    Array<T> &operator=(const Array<T> &cpy);
    T &operator[](unsigned int i);
    ~Array();

    unsigned int getSize() const;
};

// Default Constructor
template<typename T>
Array<T>::Array() : _element(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : _element(NULL), _size(size)
{
    if (_size > 0)
        _element = new T[_size];
    else
        _element = NULL;
}

template <typename T>
Array<T>::Array(const Array<T> &cpy) : _element(NULL), _size(0)
{
    *this = cpy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &cpy)
{
    if (this != &cpy)
    {
        if (_element)
            delete[] _element;

        _size = cpy._size;
        _element = new T[_size];
        std::copy(cpy._element, cpy._element + _size, _element);
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::out_of_range("Out of bound");
    return _element[i];
}

template <typename T>
Array<T>::~Array()
{
	if (_element)
	    delete[] _element;
}

template <typename T>
unsigned int Array<T>::getSize() const
{
    return _size;
}
