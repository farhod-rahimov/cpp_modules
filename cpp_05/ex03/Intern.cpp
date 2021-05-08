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

static Form *createRobotomyRequestForm(const char *formName, const char *targetName) {
    return (new RobotomyRequestForm(formName, targetName));
}
static Form *createShrubberyCreationForm(const char *formName, const char *targetName) {
    return (new ShrubberyCreationForm(formName, targetName));
}
static Form *createPresidentialPardonForm(const char *formName, const char *targetName) {
    return (new PresidentialPardonForm(formName, targetName));
}
    
Form *Intern::findForm(const char *formName, const char *targetName) {
    Form *ptr;
    std::string tmp;

    tmp = formName;
    const char  *array[4] = {"robotomy request", "shrubbery creation", "presidential pardon", NULL};
    Form *(*funcs[3])(const char *formName, const char *targetName) = {createRobotomyRequestForm, createShrubberyCreationForm, createPresidentialPardonForm};
    
    for (int i = 0; array[i]; i++)
    {
        if (tmp.compare(array[i]) == 0)
        {
            ptr = funcs[i](formName, targetName);
            std::cout << "Intern creates " << formName << std::endl;
            return (ptr);
        }
    }
    std::cout << "Form '" << formName << "' doesn't exist" << std::endl;
    return (NULL);
};

Form *Intern::makeForm(const char *formName, const char *targetName) {
    Form *ptr;
    
    if (formName == NULL || targetName == NULL)
        return (NULL);
    ptr = this->findForm(formName, targetName);
    return (ptr);
};