#include "Bureaucrat.hpp"

void catch_low(void)
{
    Bureaucrat bu("bu_name", 100);
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
void catch_constr(void)
{
    try
    {
        // Bureaucrat bu("bu_name", 150);
        // Bureaucrat bu("bu_name", 151);
        // Bureaucrat bu("bu_name", 1);
        Bureaucrat bu("bu_name", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main()
{
    catch_high();
    // catch_low();
    // catch_constr();
}