#include "phone_book.hpp"

Contact     ft_add(void)
{
    Contact new_contact;

    new_contact.flag = 1;
    std::cout << "First_name: ";
    std::cin >> new_contact.first_name;
    std::cout << "Last_name: ";
    std::cin >> new_contact.last_name;
    std::cout << "Nick_name: ";
    std::cin >> new_contact.nick_name;
    std::cout << "Login: ";
    std::cin >> new_contact.login;
    std::cout << "Postal_address: ";
    std::cin >> new_contact.postal_address;
    std::cout << "Email_address: ";
    std::cin >> new_contact.email_address;
    std::cout << "Phone_number: ";
    std::cin >> new_contact.phone_number;
    std::cout << "Birth_date: ";
    std::cin >> new_contact.birth_date;
    std::cout << "Favorite_meal: ";
    std::cin >> new_contact.favorite_meal;
    std::cout << "Underwear_color: ";
    std::cin >> new_contact.underwear_color;
    std::cout << "Darkest_secret: ";
    std::cin >> new_contact.darkest_secret;
    ft_print_split_line();
    std::cout <<  "SAVED!" << std::endl;
    ft_print_split_line();
    return (new_contact);
}