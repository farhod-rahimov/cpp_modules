#include "Bureaucrat.hpp"

void catch_low(void)
{
    Bureaucrat bu("bu_name", 100);
    std::cout << bu;
    try
    {
        for (int i = 100; i <= 151; ++i)
            bu.decrement();
    }
    catch (std::exception & e)
    {
        std::cerr << "Bureaucrat's grade is " << bu.getGrade() << std::endl;
        std::cerr << e.what() << std::endl;
    }
}
void catch_high(void)
{
    Bureaucrat bu("bu_name", 100);
    std::cout << bu;
    try
    {
        for (int i = 100; i >= 0; --i)
            bu.increment();
    }
    catch (std::exception & e)
    {
        std::cerr << "Bureaucrat's grade is " << bu.getGrade() << std::endl;
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    // catch_high();
    catch_low();
}