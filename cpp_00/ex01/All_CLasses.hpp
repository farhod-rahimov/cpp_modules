#include <iostream>

#ifndef ALL_CLASSESS_HPP
# define ALL_CLASSESS_HPP

class Contact {
public:
    Contact(void);
    ~Contact(void);
    
    static int get_nb_inst(void);
    
    int         index;
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

private:
    static int _nb_inst;
};

#endif