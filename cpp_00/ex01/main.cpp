#include "phone_book.hpp"

int     main(void)
{
    Contact     contacts[NUM_CONTACTS];
    std::string command;
    std::string overflow_command;
    int         replace_index;
    int         i;

    i = 0;
    ft_print_split_line();
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
                    replace_index = ft_get_replace_index();
                    contacts[replace_index] = ft_add();
                    i++;
                }
                else
                    ft_contact_not_saved();
            }
            else
                contacts[i++] = ft_add();
        }
        else if (command.compare("SEARCH") == 0)
            ft_search(contacts);
    }
}
