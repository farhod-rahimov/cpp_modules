#include "phone_book.hpp"

Contact     ft_add(void)
{
    Contact     new_contact;
    int         i;
    std::string tmp;

    new_contact.set_flag(1);
    i = 0;
    std::cout << "First_name: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    while (new_contact.get_data(0).length() == 0) // 0 - First_name
    {
        ft_print_split_line(); std::cout << "Error. First_name cannot be emty. Try again!\n"; ft_print_split_line();
        std::cout << "First_name: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(0, tmp);
    }
    std::cout << "Last_name: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Nick_name: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Login: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Postal_address: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Email_address: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Phone_number: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    while (new_contact.get_data(6).length() == 0) // 6 - Phone_number
    {
        ft_print_split_line(); std::cout << "Error. Phone_number cannot be emty. Try again!\n"; ft_print_split_line();
        std::cout << "Phone_number: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(6, tmp);
    }
    std::cout << "Birth_date: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Favorite_meal: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Underwear_color: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    std::cout << "Darkest_secret: "; std::getline(std::cin, tmp, '\n'); new_contact.set_data(i++, tmp);
    ft_print_split_line();
    std::cout <<  "SAVED!" << std::endl;
    ft_print_split_line();
    return (new_contact);
}