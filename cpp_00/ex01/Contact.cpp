#include "Contact.hpp"

Contact::Contact(void) {
    Contact::_flag = 0;
};

void Contact::set_data(int i, std::string tmp) {
    _data[i] = tmp;
};

std::string Contact::get_data(int i) {
    return (_data[i]);
};

void Contact::set_flag(bool flag) {
    _flag = flag;
};

bool Contact::is_contact_filled(void) {
    return (_flag);
};