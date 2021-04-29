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

std::string ft_contact_overflow(void)
{
    std::string overflow_command;

    std::cout << "PHONE_BOOK can store only 8 contacts. Do you agree to replace some contact? " \
    << "Write YES if you agree, else ANY characters" << std::endl;
    std::getline(std::cin, overflow_command, '\n');
    return (overflow_command);
}

int ft_check_if_index_is_correct(std::string index)
{
    int i;

    i = -1;
    while (index[++i])
        if (index[i] < 48 || index[i] > 57)
            return (-1);
    return (0);
}

int ft_get_replace_index(void)
{
    int         replace_index;
    std::string str;
    int         tmp;

    ft_print_split_line();
    std::cout << "Which contact do you want to replace? Write the index between 0 and 7" << std::endl;
    std::getline(std::cin, str, '\n');
    tmp = ft_check_if_index_is_correct(str);
    replace_index = std::atoi(str.data());
    ft_print_split_line();

    while (tmp < 0 || replace_index < 0 || replace_index >= NUM_CONTACTS)
    {
        std::cout << "Error. INDEX should be between 0 and 7! Try again!" << std::endl;
        std::getline(std::cin, str, '\n');
        tmp = ft_check_if_index_is_correct(str);
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