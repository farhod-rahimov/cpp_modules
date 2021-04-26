#include "phone_book.hpp"

void ft_print_split_line(void)
{
    std::cout << "-------------------------------------------" << std::endl;
}

void ft_show_available_commands(void)
{
    std::cout << "Choose and write one of the available commands: ADD, EXIT, SEARCH" << std::endl;
    ft_print_split_line();
}

std::string ft_get_command(void)
{
    std::string command;

    std::cin >> command;
    ft_print_split_line();
    return (command);
}

std::string ft_contact_overflow(void)
{
    std::string overflow_command;

    std::cout << "PHONE_BOOK can store only 8 contacts. Do you agree to replace some contact? " \
    << "Write YES if you agree, else ANY characters" << std::endl;
    std::cin >> overflow_command;
    return (overflow_command);
}

int ft_get_replace_index(void)
{
    int         replace_index;
    std::string str;
    char        tmp;

    ft_print_split_line();
    std::cout << "Which contact do you want to replace? Write the index between 0 and 7" << std::endl;
    std::cin >> str;
    str.copy(&tmp, 1, 0);
    ft_print_split_line();

    while (tmp < 48 || tmp > 57 || replace_index < 0 || replace_index >= NUM_CONTACTS)
    {
        std::cout << "Error. INDEX should be between 0 and 7! Try again!" << std::endl;
        std::cin >> str;
        str.copy(&tmp, 1, 0);
        replace_index = std::atoi(str.data());
        ft_print_split_line();
    }
    system("clear");
    ft_print_split_line();
    std::cout << "REPLACING THE CONTACT WITH INDEX " << replace_index << std::endl;
    ft_print_split_line();
    return (replace_index);
}

void ft_contact_not_saved(void)
{
    ft_print_split_line();
    std::cout << "Contact has NOT been SAVED!" << std::endl;
    ft_print_split_line();
}