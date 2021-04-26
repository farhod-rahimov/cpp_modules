#include "phone_book.hpp"

Contact     ft_add(void)
{
    Contact     new_contact;
    int         i;
    std::string tmp;

    new_contact.flag = 1;
    i = 0;
    std::cout << "First_name: "; std::cin >> tmp; new_contact.set_data(i++, tmp);    
    std::cout << "Last_name: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Nick_name: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Login: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Postal_address: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Email_address: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Phone_number: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Birth_date: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Favorite_meal: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Underwear_color: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    std::cout << "Darkest_secret: "; std::cin >> tmp; new_contact.set_data(i++, tmp);
    ft_print_split_line();
    std::cout <<  "SAVED!" << std::endl;
    ft_print_split_line();
    return (new_contact);
}