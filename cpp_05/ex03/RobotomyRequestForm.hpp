#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    std::string     _target;
    virtual void    _beExecuted(void) const;
    RobotomyRequestForm();

public:
    RobotomyRequestForm(std::string name, std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &src);

    RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

    std::string getTarget(void) const;
};

#endif