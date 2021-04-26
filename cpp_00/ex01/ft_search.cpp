#include "phone_book.hpp"

int ft_get_index(int flag)
{
    std::string str;
    char tmp;

    if (flag == 1)
        std::cout << "Error. INDEX should be between 0 and 7! ";
    else if (flag == 2)
        std::cout << "Error. Choosed INDEX doesn't exist. ";
    if (flag)
        std::cout << "Try again!" << std::endl;
    std::cin >> str;
    ft_print_split_line();
    str.copy(&tmp, 1, 0);
    if (tmp < 48 || tmp > 57)
        return (-1);
    return (std::atoi(str.data()));
}

static void ft_review_contact(Contact contact, int i)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;

    std::cout << std::setw(10) << i << "|";
    if (contact.first_name.length() > 10)
    {
        first_name = contact.first_name.substr(0, 9);
        std::cout << std::setw(9) << first_name << ".|";
    }
    else
        std::cout << std::setw(10) << contact.first_name << "|";
    if (contact.last_name.length() > 10)
    {
        last_name = contact.last_name.substr(0, 9);
        std::cout << std::setw(9) << last_name << ".|";
    }
    else
        std::cout << std::setw(10) << contact.last_name << "|";
    if (contact.nick_name.length() > 10)
    {
        nick_name = contact.nick_name.substr(0, 9);
        std::cout << std::setw(9) << nick_name << "." << std::endl;
    }
    else
        std::cout << std::setw(10) << contact.nick_name << std::endl;
}

static void ft_show_choosed_contact(Contact contact, int index)
{
    system("clear");
    ft_print_split_line();
    std::cout << "SHOWING THE CONTACT WITH INDEX " << index << std::endl;
    ft_print_split_line();
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Nick name: " << contact.nick_name << std::endl;
    std::cout << "Login: " << contact.login << std::endl;
    std::cout << "Postal address: " << contact.postal_address << std::endl;
    std::cout << "Email address: " << contact.email_address << std::endl;
    std::cout << "Phone number: " << contact.phone_number << std::endl;
    std::cout << "Birth date: " << contact.birth_date << std::endl;
    std::cout << "Favorite meal: " << contact.favorite_meal << std::endl;
    std::cout << "Underwear color: " << contact.underwear_color << std::endl;
    std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
    ft_print_split_line();
}

void ft_search(Contact contacts[NUM_CONTACTS])
{
    int index;
    int i;

    i = 0;
    if (!contacts[0].flag)
    {
        std::cout << "PHONE BOOK IS EMPTY!" << std::endl;
        ft_print_split_line();
        return ;
    }

    std::cout << "   INDEX  |" << "FIRST_NAME|" << " LAST_NAME|" << " NICK_NAME" << std::endl;
    ft_print_split_line();
    while (i < NUM_CONTACTS)
    {
        if (contacts[i].flag)
            ft_review_contact(contacts[i], i);
        i++;
    }
    ft_print_split_line();
    std::cout << "Choose the index of the contact you wanna see in details" << std::endl;
    index = ft_get_index(0);
    while (1)
    {
        if (index < 0 || index >= NUM_CONTACTS)
            index = ft_get_index(1);
        else if (!contacts[index].flag)
            index = ft_get_index(2);
        else
            break ;
    }
    ft_show_choosed_contact(contacts[index], index);
}