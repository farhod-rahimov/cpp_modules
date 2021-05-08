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
    
    class FormDoesntExistException : public std::exception {
        private:
            char const *_err_msg;
            FormDoesntExistException();

        public:
            FormDoesntExistException(std::string err_msg);
            virtual char const *what() const throw();
    };

    Form *makeForm(std::string formName, std::string targetName);
    Form *findForm(std::string formName, std::string targetName);
};

#endif