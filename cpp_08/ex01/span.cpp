#include "span.hpp"

Span::Span() {
};

Span::Span(unsigned int N) {
    _max_num_values = N;
};

Span::~Span() {
}

Span::Span(Span const &src) {
    *this = src;
};

Span &Span::operator=(Span const &src) {
    if (this != &src)
    {
        this->_max_num_values = src._max_num_values;
        this->_array = src._array;
    }
    return (*this);
};

Span::SpanException::SpanException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
};

char const *Span::SpanException::what() const throw () {
    return (this->_err_msg);
};

void Span::addNumber(int number) {
    if (_array.size() < _max_num_values)
    {
        _array.push_back(number);
        std::sort(_array.begin(), _array.end());
    }
    else
        throw(Span::SpanException("Error. Cannot add the given number. Array is FULL"));
};

void Span::addNumber(int start, int end) {
    for ( ; start < end; start++)    
        addNumber(start);
}

int Span::shortestSpan(void) const {
    if (_array.size() < 2)
        throw(Span::SpanException("Error. Cannot calculate the SHORTEST span. The size of array is less than 2"));
    return (_array[1] - _array[0]);
};

int Span::longestSpan(void) const {
    if (_array.size() < 2)
        throw(Span::SpanException("Error. Cannot calculate the LONGEST span. The size of array is less than 2"));
    else
        return (_array[_array.size() - 1] - _array[0]);
};
