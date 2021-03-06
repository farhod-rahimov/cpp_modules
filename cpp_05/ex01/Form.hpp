#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    char const  *_name;
    int const   _signGrade;
    int const   _executeGrade;
    bool        _isFormSigned;
    Form();

public:
    Form(char const *name, int const signGrade, int const executeGrade);
    virtual ~Form();
    Form(Form const &src);
    
    Form &operator=(Form const &src);

    class GradeTooHighException : public std::exception {
        private: 
            char const *_err_msg;
            GradeTooHighException();

        public:
            GradeTooHighException(std::string err_msg);
            virtual char const *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        private:
            char const *_err_msg;
            GradeTooLowException();

        public:
            GradeTooLowException(std::string err_msg);
            virtual char const *what() const throw();
    };

    std::string const   getName(void) const;
    int                 getSignGrade(void) const;
    int                 getExecuteGrade(void) const;
    bool                getIsFormSigned(void) const;

    void                beSigned(Bureaucrat & b);
};

std::ostream &operator<<(std::ostream & o, Form const & src);

#endif