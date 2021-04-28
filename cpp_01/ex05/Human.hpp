#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
    Brain const _my_brain;

public:
    Human();
    Brain const &getBrain(void);
    std::string identify(void) const;
};

#endif