#include "Pony.hpp"

void Pony::setColor(const char *c) {
	Pony::color = c;
};

const char *Pony::getColor() {
	return (Pony::color);
};

void Pony::setWeight(int w) {
	Pony::weight = w;
};

int	Pony::getWeight() {
	return (Pony::weight);
};