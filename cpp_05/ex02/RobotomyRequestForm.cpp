#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : \
        Form("RobotomyRequestForm", 72, 45) {
    this->_target = target;
};

RobotomyRequestForm::~RobotomyRequestForm() {
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : \
        Form("RobotomyRequestForm", 72, 45) {
    this->_target = src.getTarget();
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
    if (this != &src)
        this->_target = src.getTarget();
    return (*this);
};

void RobotomyRequestForm::_beExecuted(Bureaucrat const & executor) const {
    Bureaucrat const *tmp = &executor;
    if (tmp == NULL)
        return ;
    if (executor.getGrade() <= this->getExecuteGrade())
    {
        std::cout << "Wwrrrrrr... Wshhhhhhhh... " << this->_target << \
            " has been robotomized successfully 50% of the time" << std::endl;

    }
    else
        std::cout << "Piiiii... Pipip...." << std::endl;
};

std::string RobotomyRequestForm::getTarget(void) const {
    return (this->_target);
}
