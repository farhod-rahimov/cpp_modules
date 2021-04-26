#include "phone_book.hpp"

static void ft_show_available_commands(void)
{
    std::cout << "Choose and write one of the available commands: ADD, EXIT, SEARCH" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}
static std::string ft_get_command(void)
{
    std::string command;

    std::cin >> command;
    std::cout << "-------------------------------------------" << std::endl;
    return (command);
}

static std::string ft_contact_overflow()
{
    std::string overflow_command;

    std::cout << "PHONE_BOOK can store only 8 contacts. Do you agree to replace some contact? " \
    << "Write YES if you agree, else ANY characters" << std::endl;
    std::cin >> overflow_command;
    return (overflow_command);
}

static int ft_replace_contact()
{
    int replace_index;

    std::cout << "Which contact do you want to replace? Write the index between 0 and 7" << std::endl;
    std::cin >> replace_index;
    return (replace_index);
}

int     main(void)
{
    Contact     contacts[NUM_CONTACTS];
    std::string command;
    std::string overflow_command;
    int         replace_index;
    int         i;

    i = 0;
    while (1)
    {
        ft_show_available_commands();
        command = ft_get_command();
        if (command.compare("EXIT") == 0)
            ft_exit();
        else if (command.compare("ADD") == 0)
        {
            if (i >= NUM_CONTACTS)
            {
                overflow_command = ft_contact_overflow();
                if (overflow_command.compare("YES") == 0)
                {
                    replace_index = ft_replace_contact();
                    while (replace_index < 0 || replace_index >= NUM_CONTACTS)
                    {
                        std::cout << "Error. Write the index between 0 and 7!" << std::endl;
                        std::cin >> replace_index;
                    }
                    contacts[replace_index] = ft_add();
                    i++;
                }
                else
                    std::cout << "Contact has NOT been SAVED!" << std::endl;
            }
            else
                contacts[i++] = ft_add();
        }
        else if (command.compare("SEARCH") == 0)
            ft_search(contacts);
    }
}
