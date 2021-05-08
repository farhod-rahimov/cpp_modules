#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat bu("ALEX", 1);

    Intern someRandomIntern;
    Form* p;
    Form* r;
    Form* s;
    Form* error;

    try {
        r = someRandomIntern.makeForm("robotomy request", "Bender");
        s = someRandomIntern.makeForm("shrubbery creation", "home");
        p = someRandomIntern.makeForm("presidential pardon", "punishment");
        error = someRandomIntern.makeForm("presidentiaaaaal pardon", "punishment");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    // bu.signForm(*r);
    // bu.signForm(*s);
    // bu.signForm(*p);
    // bu.executeForm(*r);
    // bu.executeForm(*s);
    // bu.executeForm(*p);
    return (0);
}