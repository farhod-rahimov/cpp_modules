#include "Form.hpp"

Form::Form(char const *name, int signGrade, int executeGrade) \
            : _name(name), _signGrade(signGrade), _executeGrade(executeGrade) {
    if (signGrade < 1)
        throw (Form::GradeTooHighException("Cannot create create Form object because the second parameter SIGN_GRADE is LESS than 1"));
    else if (signGrade > 150)
        throw (Form::GradeTooHighException("Cannot create create Form object because the second parameter SIGN_GRADE is GREATER than 150"));
    else if (executeGrade < 1)
        throw (Form::GradeTooHighException("Cannot create create Form object because the second parameter EXECUTE_GRADE is LESS than 1"));
    else if (executeGrade > 150)
        throw (Form::GradeTooHighException("Cannot create create Form object because the second parameter EXECUTE_GRADE is GREATER than 150"));
    this->_isFormSigned = false;
};

Form::~Form() {
};

Form::Form(Form const &src) : _name(src._name), \
    _signGrade(src._signGrade), _executeGrade(src._executeGrade), \
        _isFormSigned(src._isFormSigned) {
};

Form &Form::operator=(Form const &src) {
    int *tmp;
    
    if (this != &src)
    {
        this->_name = src._name;
        tmp = (int *)&this->_signGrade;
        *tmp = src._signGrade;
        tmp = (int *)&this->_executeGrade;
        *tmp = src._executeGrade;
        this->_isFormSigned = src._isFormSigned;
    }
    return (*this);
};

Form::GradeTooHighException::GradeTooHighException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
};

char const *Form::GradeTooHighException::what() const throw () {
    return (this->_err_msg);
};

Form::GradeTooLowException::GradeTooLowException(std::string err_msg) {
    this->_err_msg = err_msg.c_str();
};

char const *Form::GradeTooLowException::what() const throw () {
    return (this->_err_msg);
};

std::string const Form::getName(void) const {
    return (this->_name);
};

int Form::getSignGrade(void) const {
    return (this->_signGrade);
};

int Form::getExecuteGrade(void) const {
    return (this->_executeGrade);
};

bool  Form::getIsFormSigned(void) const {
    return (this->_isFormSigned);
};

void Form::beSigned(Bureaucrat & b) {
    Bureaucrat *tmp = &b;
    if (tmp == NULL)
        return ;
    if (this->_isFormSigned == true)
        return ;
    b.signForm(*this);
    if (b.getGrade() <= this->_signGrade)
        this->_isFormSigned = true;
};

std::ostream &operator<<(std::ostream & o, Form const & src) {
    o << src.getName() << ": SIGN_GRADE " << src.getSignGrade() << \
        ", EXECUTE_GRADE " << src.getExecuteGrade() << ", ";
    if (src.getIsFormSigned())
        o << "SIGNED" << std::endl;
    else
        o << "UNSIGNED" << std::endl;
    return (o);
};
