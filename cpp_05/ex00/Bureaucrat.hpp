#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define HIGH_LVL   1
# define LOW_LVL    150

#include <iostream>

class Bureaucrat {
private:
    char   const    *_name;
    int _grade;
    Bureaucrat();

public:
    Bureaucrat(char const *name, int grade);
    virtual ~Bureaucrat();
    Bureaucrat(Bureaucrat const &src);
    
    Bureaucrat &operator=(Bureaucrat const &src);

    class GradeTooHighException : public std::exception {
        private: 
            // std::string _err_msg;
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
    int                 getGrade(void) const;
    
    void                increment(void);
    void                decrement(void);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif