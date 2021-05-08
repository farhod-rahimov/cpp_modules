#ifndef PRESIDENTIAL_PARDON_FORM
# define PRESIDENTIAL_PARDON_FORM

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    std::string     _target;
    virtual void    _beExecuted(Bureaucrat const & executor) const;
    PresidentialPardonForm();

public:
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &src);

    PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

    std::string getTarget(void) const;
};

#endif