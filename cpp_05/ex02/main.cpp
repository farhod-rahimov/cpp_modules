#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void main_copy(void)
{
    ShrubberyCreationForm form("target_name");
    ShrubberyCreationForm form_copy2(form);

    std::cout << form.getTarget() << std::endl;
    std::cout << form_copy2.getTarget() << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    
    ShrubberyCreationForm form_copy("target_name_copy");
    
    std::cout << form_copy.getTarget() << std::endl;
    form_copy = form;
    std::cout << form_copy.getTarget() << std::endl;
}

void main_ShrubberyCreationForm_true()
{
    Bureaucrat bu1("Alex", 136);
    Bureaucrat bu2("Jack", 44);
    Bureaucrat bu3("Melinda", 4);

    ShrubberyCreationForm formS("home");  //execute grade 137
    RobotomyRequestForm formR("paper");  //execute grade 45
    PresidentialPardonForm formP("punishment");  //execute grade 5
    bu1.executeForm(formS);
    bu2.executeForm(formR);
    bu3.executeForm(formP);
}

void main_ShrubberyCreationForm_false()
{
    Bureaucrat bu1("Alex", 138);
    Bureaucrat bu2("Jack", 46);
    Bureaucrat bu3("Melinda", 6);

    ShrubberyCreationForm formS("home");  //execute grade 137
    RobotomyRequestForm formR("paper");  //execute grade 45
    PresidentialPardonForm formP("punishment");  //execute grade 5
    bu1.executeForm(formS);
    bu2.executeForm(formR);
    bu3.executeForm(formP);
}

int main()
{
    // main_copy();
    // main_ShrubberyCreationForm_true();
    main_ShrubberyCreationForm_false();
}