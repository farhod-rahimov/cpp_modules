#include "Header.hpp"

int main()
{
    Data *data;
    void *raw;

    raw = serialize();
    data = deserialize(raw);

    std::cout << "random string 1: " << data->s1 << std::endl;
    std::cout << "random int:      " << data->i << std::endl;
    std::cout << "random string 2: " << data->s2 << std::endl;
    delete data->s1;
    delete data->s2;
}