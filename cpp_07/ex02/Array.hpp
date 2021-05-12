#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<class T>
class Array {
private:
    T            *_array;
    unsigned int _size;

public:
    Array();
    Array(unsigned int n);
    virtual ~Array();
    Array(Array const & src);

    Array &operator=(Array const &src);

    class OutOfRangeException : public std::exception {
        private:
            char const * _err_msg;
            OutOfRangeException();

        public:
            OutOfRangeException(std::string err_msg);
            virtual char const *what() const throw();
    };

    T &operator[](unsigned int i);
    
    unsigned int size(void) const;
};

template<class T>
Array<T>::Array() {
    this->_array = new T[0];
    this->_size = 0;
};

template<class T>
Array<T>::Array(unsigned int n) {
    this->_array = new T[n];
    this->_size = n;
};

template<class T>
Array<T>::~Array() {
    delete [] this->_array;
};

template<class T>
Array<T>::Array(Array const & src){
    this->_array = new T[0];
    *this = src;
};

template<class T>
Array<T> & Array<T>::operator=(Array const &src) {
    if (this != &src)
    {
        delete this->_array;

        this->_array = new T[src._size];
        this->_size = src._size;
        
        for (unsigned int i = 0; i < src._size; i++) {
            this->_array[i] = src._array[i];
        }
    }
    return (*this);
};

template<class T>
Array<T>::Array::OutOfRangeException::OutOfRangeException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
}

template<class T>
char const * Array<T>::Array::OutOfRangeException::what() const throw() {
    return (this->_err_msg);
}

template<class T>
T & Array<T>::operator[](unsigned int i) {
    if (i >= this->_size)
        throw(Array::OutOfRangeException("Error.The requested index does not exist"));
    return (this->_array[i]);
};

template<class T>
unsigned int Array<T>::size(void) const {
    return (this->_size);
};

#endif