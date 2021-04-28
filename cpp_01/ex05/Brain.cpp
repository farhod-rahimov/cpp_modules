#include "Brain.hpp"

std::string Brain::identify(void) const{
    std::stringstream address;

    address << this;
    return (address.str());
};

void Brain::setWeight(int weight) {
    Brain::_weight = weight;
};

int Brain::getWeight(void) {
    return (Brain::_weight);
};