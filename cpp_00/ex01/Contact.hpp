#include <iostream>

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
private:
    std::string _data[11];
    bool        _flag;

public:
    Contact(void);
    
    void        set_data(int i, std::string src);
    std::string get_data(int i);
    void        set_flag(bool flag);
    bool        is_contact_filled(void);
};

#endif