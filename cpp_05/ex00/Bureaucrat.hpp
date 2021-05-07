#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define HIGH_LVL   1
# define LOW_LVL    150
# define HIGH_MSG   "Cannot increment because the grade is already in the HIGHEST level"
# define LOW_MSG    "Cannot decrement because the grade is already in the LOWEST level"


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
        public:
            virtual char const *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual char const *what() const throw();
    };

    std::string const   getName(void) const;
    int                 getGrade(void) const;
    
    void                increment(void);
    void                decrement(void);
};


#endif