#include "span.hpp"

Span::Span() {
};

Span::Span(unsigned int N) {
    _max_num_values = N;
    _min_value_1 = 0;
    _min_value_2 = 0;
    _max_value = 0;
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

void Span::addNumber(int number) {
    if (_array.size() == 0 && _array.size() < _max_num_values)
    {
        _array.push_back(number);
        _min_value_1 = number;
    }
    else if (_array.size() == 1 && _array.size() < _max_num_values)
    {
        _array.push_back(number);

        if (number < _min_value_1)
        {
            _min_value_2 = _min_value_1;
            _min_value_1 = number;
        }
        else
            _min_value_2 = number;
    }
    else if (_array.size() == 2 && _array.size() < _max_num_values)
    {
        _array.push_back(number);

        if (number < _min_value_1)
        {
            _max_value = _min_value_2;
            _min_value_2 = _min_value_1;
            _min_value_1 = number;
        }
        else if (number < _min_value_2)
        {
            _max_value = _min_value_2;
            _min_value_2 = number;
        }
        else
            _max_value = number;
    }
    else if (_array.size() < _max_num_values)
    {
        _array.push_back(number);

        if (number < _min_value_1)
        {
            _min_value_2 = _min_value_1;
            _min_value_1 = number;
        }
        else if (number < _min_value_2)
        {
            _min_value_2 = number;
        }
        else if (number > _max_value)
        {
            _max_value = number;
        }
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
    return (_min_value_2 - _min_value_1);
};

Span::SpanException::SpanException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
};

char const *Span::SpanException::what() const throw () {
    return (this->_err_msg);
};

int Span::longestSpan(void) const {
    if (_array.size() < 2)
        throw(Span::SpanException("Error. Cannot calculate the LONGEST span. The size of array is less than 2"));
    else if (_array.size() == 2)
        return (_min_value_2 - _min_value_1);
    return (_max_value - _min_value_1);
};

