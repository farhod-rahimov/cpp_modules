#include "Bureaucrat.hpp"
#include "Form.hpp"

void main_init_wrong()
{
    try {
        Bureaucrat bu1("Alex", 151);
        // Bureaucrat bu2("Jack", 0);
        // Form formA("Form A", 0, 0);
        // Form formB("Form B", 151, 151);
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void main_init_true()
{
    try {
        Bureaucrat bu("Alex", 140);
        Form formA("Form A", 130, 100);
        Form formB("Form B", 150, 100);
        Form formC("Form C", 140, 100);
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}

void main_sign()
{
    Bureaucrat bu("Alex", 140);
    Form formA("Form A", 130, 100);
    Form formB("Form B", 150, 100);
    Form formC("Form C", 140, 100);

    formA.beSigned(bu);
    formB.beSigned(bu);
    formC.beSigned(bu);

    std::cout << bu << formA << formB << formC;
}

int main()
{
    main_init_wrong();
    // main_init_true();
    // main_sign();
}