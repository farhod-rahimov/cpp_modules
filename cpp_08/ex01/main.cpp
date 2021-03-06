#include "span.hpp"

void main_subj()
{
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void main_1()
{
    Span sp(10);
 
    try {
        sp.addNumber(1, 11);
        std::cout << "Added 10 ints in array with size 10" << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void main_2()
{
    Span sp(10);
 
    try {
        std::cout << "Trying add 11 ints in array with size 10" << std::endl;
        sp.addNumber(1, 12);
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void main_3()
{
    Span sp(10);
 
    try {
        sp.addNumber(1);
        std::cout << "Trying calculate shortestSpan in array with only 1 value" << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void main_4()
{
    Span sp(10);
 
    try {
        sp.addNumber(1);
        std::cout << "Trying calculate longestSpan in array with only 1 value" << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void main_5()
{
    Span sp(10);
 
    try {
        sp.addNumber(0);
        sp.addNumber(6);
        sp.addNumber(0);
        sp.addNumber(134);
        sp.addNumber(1900);
        std::cout << "Trying calculate shortestSpan and longestSpan in array with only 5 values" << std::endl;
        std::cout << "SHORTEST SPAN: " << sp.shortestSpan() << std::endl;
        std::cout << "LONGEST SPAN: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void main_6()
{
    Span sp(11000);

    try {
        sp.addNumber(0, 11000);
        std::cout << "Trying calculate shortestSpan and longestSpan in array with 11000 values" << std::endl;
        std::cout << "SHORTEST SPAN: " << sp.shortestSpan() << std::endl;
        std::cout << "LONGEST SPAN: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    main_subj();
    // main_1();
    // main_2();
    // main_3();
    // main_4();
    // main_5();
    // main_6();
}