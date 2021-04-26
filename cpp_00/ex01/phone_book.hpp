#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# define NUM_CONTACTS 8

#include <iomanip>
#include "Contact_class.hpp"

Contact         ft_add(void);
void            ft_search(Contact contacts[NUM_CONTACTS]);
void            ft_exit(void);
int             ft_get_index(int flag);
void            ft_print_split_line(void);
void            ft_show_available_commands(void);
std::string     ft_get_command(void);
std::string     ft_contact_overflow(void);
int             ft_get_replace_index(void);
void            ft_contact_not_saved(void);

#endif