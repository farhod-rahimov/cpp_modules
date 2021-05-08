#ifndef SHRUBERRY_CREATION_FORM_HPP
# define SHRUBERRY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
    std::string     _target;
    virtual void    _beExecuted(void) const;
    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(std::string name, std::string target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &src);

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

    std::string getTarget(void) const;
};


#endif