#include <iostream>
#include <iomanip>

#include "All_CLasses.hpp"


Contact     ft_add(void)
{
    Contact new_contact;

    new_contact.flag = 1;
    std::cout << "-------------------" << std::endl;
    std::cout << "First_name: ";
    std::cin >> new_contact.first_name;
    // std::cout << "Last_name: ";
    // std::cin >> new_contact.last_name;
    std::cout << "Nick_name: ";
    std::cin >> new_contact.nick_name;
    // std::cout << "Login: ";
    // std::cin >> new_contact.login;
    // std::cout << "Postal_address: ";
    // std::cin >> new_contact.postal_address;
    // std::cout << "Email_address: ";
    // std::cin >> new_contact.email_address;
    // std::cout << "Phone_number: ";
    // std::cin >> new_contact.phone_number;
    // std::cout << "Birth_date: ";
    // std::cin >> new_contact.birth_date;
    // std::cout << "Favorite_meal: ";
    // std::cin >> new_contact.favorite_meal;
    // std::cout << "Underwear_color: ";
    // std::cin >> new_contact.underwear_color;
    // std::cout << "Darkest_secret: ";
    // std::cin >> new_contact.darkest_secret;
    std::cout << "-------------------" << std::endl;
    std::cout <<  "SAVED!" << std::endl;
    std::cout << "-------------------" << std::endl;
    return (new_contact);
}

int     ft_get_index()
{
    int index;

    std::cin >> index;
    return (index);
}

void    ft_search(Contact contacts[8])
{
    int index;
    int i;

    i = 0;
    std::cout << "   INDEX  |" << "FIRST_NAME|" << " NICK_NAME" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::string first_name;
    std::string nick_name;
    while (i < 8)
    {
        if (contacts[i].flag)
        {
            std::cout << std::setw(10) << i << "|";
            if (contacts[i].first_name.length() > 10)
            {
                first_name = contacts[i].first_name.substr(0, 9);
                std::cout << std::setw(9) << first_name << "." << "|";
            }
            else
                std::cout << std::setw(10) << contacts[i].first_name << "|";
            if (contacts[i].nick_name.length() > 10)
            {
                nick_name = contacts[i].nick_name.substr(0, 9);
                std::cout << std::setw(9) << nick_name << ".|" << std::endl;
            }
            else
                std::cout << std::setw(10) << contacts[i].nick_name << std::endl;
        }
        i++;
    }
    index = ft_get_index();
    while (1)
    {
        if (index < 0 || index >= 8)
            index = ft_get_index();
        else if (!contacts[index].flag)
            index = ft_get_index();
        else
            break ;
    }
    std::cout << "CHOOSED INDEX IS " << index << std::endl;
}

int     main(void)
{
    Contact contacts[8];
    std::string command;
    int i;

    i = 0;
    while (1)
    {
        std::cout << "choose and write one of the available commands: ADD, EXIT, SEARCH" << std::endl;
        std::cin >> command;
        if (command.compare("EXIT") == 0)
            exit(0);
        else if (command.compare("ADD") == 0)
            contacts[i] = ft_add();
        else if (command.compare("SEARCH") == 0)
            ft_search(contacts);
    }
}
