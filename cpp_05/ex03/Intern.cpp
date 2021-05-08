#include "Intern.hpp"

Intern::Intern() {
};

Intern::~Intern() {
};

Intern::Intern(Intern const &src) {
    *this = src;
};

Intern &Intern::operator=(Intern const &src) {
    static_cast<void>(src);
    return (*this);
};

Intern::FormDoesntExistException::FormDoesntExistException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
};

char const *Intern::FormDoesntExistException::what() const throw () {
    return (this->_err_msg);
};


Form *Intern::findForm(std::string formName, std::string targetName) {
    Form *ptr;

    const char  *array[4] = {"robotomy request", "shrubbery creation", "presidential pardon", NULL};
    for (int i = 0; array[i]; i++)
    {
        if (formName.compare(array[i]) == 0 && i == 0)
            return (ptr = new RobotomyRequestForm(formName, targetName));
        else if (formName.compare(array[i]) == 0 && i == 1)
            return (ptr = new ShrubberyCreationForm(formName, targetName));
        else if (formName.compare(array[i]) == 0 && i == 2)
            return (ptr = new PresidentialPardonForm(formName, targetName));
    }
    throw (Intern::FormDoesntExistException(formName.c_str()));
    return (NULL);
};

Form *Intern::makeForm(std::string formName, std::string targetName) {
    Form *ptr;
    
    ptr = this->findForm(formName, targetName);
        return (ptr);
};