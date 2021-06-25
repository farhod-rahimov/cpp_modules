#include "mutantstack.hpp"

template< typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
};

template< typename T>
MutantStack<T>::~MutantStack() {
};

template< typename T>
MutantStack<T>::MutantStack(MutantStack const &src) {
    *this = src;
};

template< typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &src) {
    std::stack<T>::operator = (src);
	return (*this);
};

template< typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void){
    return (this->c.begin());
};

template< typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void){
    return (this->c.end());
};