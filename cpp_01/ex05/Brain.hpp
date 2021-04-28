#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
private:
    int _weight;

public:
    std::string identify(void) const;
    void setWeight(int weight);
    int  getWeight(void);
};

#endif