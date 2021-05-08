#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : \
        Form(name, 72, 45) {
    this->_target = target;
};

RobotomyRequestForm::~RobotomyRequestForm() {
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : \
        Form(src.getName(), 72, 45) {
    this->_target = src.getTarget();
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
    if (this != &src)
        this->_target = src.getTarget();
    return (*this);
};

void RobotomyRequestForm::_beExecuted(void) const {
    std::cout << "Wwrrrrrr... Wshhhhhhhh... " << this->_target << \
        " has been robotomized successfully 50% of the time" << std::endl;
};

std::string RobotomyRequestForm::getTarget(void) const {
    return (this->_target);
}
