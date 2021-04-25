#include "All_CLasses.hpp"

Contact::Contact(void) {
    Contact::_nb_inst += 1;
};

Contact::~Contact(void) {
    Contact::_nb_inst -= 1;
};

int Contact::get_nb_inst(void) {
    return (Contact::_nb_inst);
};

int Contact::_nb_inst = 0;
