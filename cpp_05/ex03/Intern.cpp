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

Intern::FormDoesntExistException::FormDoesntExistException(char const *formName) {
    this->_formName = formName;
};

char const *Intern::FormDoesntExistException::what() const throw () {
    const char *err_msg;
    std::string tmp;

    tmp = "The form '"; tmp += this->_formName; tmp += "' doesn't exist";
    err_msg = tmp.c_str();
    return (err_msg);
};

Form *Intern::findForm(const char *formName, const char *targetName) {
    Form *ptr;
    std::string tmp;

    tmp = formName;
    const char  *array[4] = {"robotomy request", "shrubbery creation", "presidential pardon", NULL};
    for (int i = 0; array[i]; i++)
    {
        if (tmp.compare(array[i]) == 0 && i == 0)
            return (ptr = new RobotomyRequestForm(formName, targetName));
        else if (tmp.compare(array[i]) == 0 && i == 1)
            return (ptr = new ShrubberyCreationForm(formName, targetName));
        else if (tmp.compare(array[i]) == 0 && i == 2)
            return (ptr = new PresidentialPardonForm(formName, targetName));
    }
    throw (Intern::FormDoesntExistException(formName));
    return (NULL);
};

Form *Intern::makeForm(const char *formName, const char *targetName) {
    Form *ptr;
    
    if (formName == NULL || targetName == NULL)
    {
        throw (Intern::FormDoesntExistException("NULL"));
        return (NULL);
    }
    ptr = this->findForm(formName, targetName);
        return (ptr);
};