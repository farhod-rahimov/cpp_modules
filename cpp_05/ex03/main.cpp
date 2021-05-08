#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void main_exist(void)
{
    Bureaucrat bu("ALEX", 1);

    Intern someRandomIntern;
    Form* p;
    Form* r;
    Form* s;

    try {
        r = someRandomIntern.makeForm("robotomy request", "Bender");
        s = someRandomIntern.makeForm("shrubbery creation", "home");
        // p = someRandomIntern.makeForm("presidential pardon", "punishment");
        p = someRandomIntern.makeForm("presidentiaaaaal pardon", "punishment");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    // bu.signForm(*r);
    // bu.signForm(*s);
    // bu.signForm(*p);
    // bu.executeForm(*r);
    // bu.executeForm(*s);
    // bu.executeForm(*p);
}

void main_not_exist(void)
{

}

int main()
{
    main_exist();
}