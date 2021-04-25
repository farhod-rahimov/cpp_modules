#include <iostream>
#include <iomanip>

#include "All_CLasses.hpp"


Contact     ft_add(void)
{
    Contact new_contact;
    std::cout << "ft_add" << std::endl;

    std::cin >> new_contact.first_name;
    std::cout << new_contact.first_name << std::endl;
    return (new_contact);
}

void    ft_search(int i)
{
    std::cout << "ft_search" << std::endl;
    (void)i;
}

int     main(void)
{
    Contact contacts[8];
    std::string command;
    int i;

    i = 0;
    // while (1)
    // {
        std::cin >> command;
        if (command.compare("EXIT") == 0)
            exit(0);
        else if (command.compare("ADD") == 0)
            contacts[i] = ft_add();
        else if (command.compare("SEARCH") == 0)
            ft_search(i);
    // }
}
