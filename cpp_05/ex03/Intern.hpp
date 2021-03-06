#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    virtual ~Intern();
    Intern(Intern const & src);

    Intern &operator=(Intern const & src);
    
    Form *makeForm(const char *formName, const char *targetName);
    Form *findForm(const char *formName, const char *targetName);
};

#endif