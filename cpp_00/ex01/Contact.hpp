#include <iostream>

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {
private:
    std::string data[11];

public:
    Contact(void);
    
    bool        flag;
    void        set_data(int i, std::string src);
    std::string get_data(int i);
};

#endif