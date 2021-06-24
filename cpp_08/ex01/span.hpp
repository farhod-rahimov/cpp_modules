#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
    unsigned int        _max_num_values;
    int                 _min_value_1;
    int                 _min_value_2;
    int                 _max_value;
    std::vector<int>    _array;
    Span();

public:
    Span(unsigned int N);
    virtual ~Span();
    Span(Span const &src);

    Span &operator=(Span const &src);

    void addNumber(int number);
    int shortestSpan(void) const;
    int longestSpan(void) const;

    void addNumber(int begin, int end);

    class SpanException : public std::exception {
    private: 
        char const *_err_msg;
        SpanException();

    public:
        SpanException(std::string err_msg);
        virtual char const *what() const throw();
    };
};

#endif