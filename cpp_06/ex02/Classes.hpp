#ifndef CLASSES_HPP
# define CLASSES_HPP

#include <iostream>
#include <time.h>

class Base;


class Base {
public:
    virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

#endif