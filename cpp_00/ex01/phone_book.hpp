#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# define NUM_CONTACTS 8

#include <iomanip>
#include "Contact_class.hpp"

Contact ft_add(void);
void    ft_search(Contact contacts[NUM_CONTACTS]);
void    ft_exit(void);

#endif