#include "Contact.hpp"

Contact::Contact(void) {
    Contact::flag = 0;
};

void Contact::set_data(int i, std::string tmp) {
    data[i] = tmp;
};

std::string Contact::get_data(int i) {
    return (data[i]);
};