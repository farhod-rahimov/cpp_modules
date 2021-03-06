#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void main_f(void)
{
    Bureaucrat bu("ALEX", 1);

    Intern someRandomIntern;
    Form* p;
    Form* r;
    Form* s;
    Form* error;

    p = someRandomIntern.makeForm("presidential pardon", "punishment");
    r = someRandomIntern.makeForm("robotomy request", "Bender");
    s = someRandomIntern.makeForm("shrubbery creation", "home");
    error = someRandomIntern.makeForm("presidentiaaaaal pardon", "punishment");

    bu.signForm(*r);
    bu.signForm(*s);
    bu.signForm(*p);
    bu.executeForm(*r);
    bu.executeForm(*s);
    bu.executeForm(*p);
    bu.executeForm(*error);
    
    delete p; delete r; delete s; delete error;
}

int main()
{
    main_f();
    // while (1)
    //     ;
    return (0);
}