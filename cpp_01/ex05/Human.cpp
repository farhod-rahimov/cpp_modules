#include "Brain.hpp"
#include "Human.hpp"

Human::Human() : _my_brain() {
};

Brain const &Human::getBrain(void) {
    return (Human::_my_brain);
};

std::string Human::identify(void) const{
    return (Human::_my_brain.identify());
};