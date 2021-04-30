#include "Brain.hpp"

Brain::Brain() {
};

Brain::Brain(int weight) {
    Brain::_weight = weight;
};

std::string Brain::identify(void) const{
    std::stringstream address;

    address << this;
    return (address.str());
};

void Brain::setWeight(int weight) {
    Brain::_weight = weight;
};

int Brain::getWeight(void) const{
    return (Brain::_weight);
};