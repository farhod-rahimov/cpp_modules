#include <iostream>

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
public:
    Contact(void);
    
    int         flag;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birth_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
};

#endif