#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
};

Bureaucrat::Bureaucrat(char const *name, int grade) {
    if (grade < HIGH_LVL)
        throw (Bureaucrat::GradeTooHighException("Cannot create create Bureaucrat object because the second parameter GRADE is LESS than 1"));
    else if (grade > LOW_LVL)
        throw (Bureaucrat::GradeTooHighException("Cannot create create Bureaucrat object because the second parameter GRADE is GREATER than 150"));
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

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
};


char const *Bureaucrat::GradeTooHighException::what() const throw () {
    return (this->_err_msg);
};

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
};

char const *Bureaucrat::GradeTooLowException::what() const throw () {
    return (this->_err_msg);
};

std::string const Bureaucrat::getName(void) const {
    return (this->_name);
};

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
};

void Bureaucrat::increment(void) {
    if (this->_grade == HIGH_LVL)
        throw (Bureaucrat::GradeTooHighException("Cannot increment because the grade is already at the HIGHEST level"));
    else
        this->_grade--;
};

void Bureaucrat::decrement(void) {
    if (this->_grade == LOW_LVL)
        throw (Bureaucrat::GradeTooLowException("Cannot decrement because the grade is already at the LOWEST level"));
    else
        this->_grade++;
};

void Bureaucrat::signForm(Form & f) {
    if (f.getIsFormSigned())
        return ;
    else if (this->_grade <= f.getSignGrade())
        std::cout << this->_name << " signs " << f.getName() << std::endl;
    else
        std::cout << this->_name << " cannot sign " << f.getName() \
            << " because he has no grade enough" << std::endl;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return (o);
};