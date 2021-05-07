#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
};

Bureaucrat::Bureaucrat(char const *name, int grade) {
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    this->_name = name;
    this->_grade = grade;
};

Bureaucrat::~Bureaucrat() {
};

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    *this = src;
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
    if (this != &src)
    {
        this->_name = src._name;
        this->_grade = src._grade;
    }
    return (*this);
};

char const *Bureaucrat::GradeTooHighException::what() const throw () {
    return (HIGH_MSG);
};

char const *Bureaucrat::GradeTooLowException::what() const throw () {
    return (LOW_MSG);
};

std::string const Bureaucrat::getName(void) const {
    return (this->_name);
};

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
};

void Bureaucrat::increment(void) {
    if (this->_grade == HIGH_LVL)
        throw (Bureaucrat::GradeTooHighException());
    else
        this->_grade--;
};

void Bureaucrat::decrement(void) {
    if (this->_grade == LOW_LVL)
        throw (Bureaucrat::GradeTooLowException());
    else
        this->_grade++;
};