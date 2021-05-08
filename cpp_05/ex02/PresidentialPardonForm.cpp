#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : \
        Form("PresidentialPardonForm", 25, 5) {
    this->_target = target;
};

PresidentialPardonForm::~PresidentialPardonForm() {
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : \
        Form("PresidentialPardonForm", 25, 5) {
    this->_target = src.getTarget();
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
    if (this != &src)
        this->_target = src.getTarget();
    return (*this);
};

void PresidentialPardonForm::_beExecuted(Bureaucrat const & executor) const {
    Bureaucrat const *tmp = &executor;
    if (tmp == NULL)
        return ;
    if (executor.getGrade() <= this->getExecuteGrade())
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
};

std::string PresidentialPardonForm::getTarget(void) const {
    return (this->_target);
}