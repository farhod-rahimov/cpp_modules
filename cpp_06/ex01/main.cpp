#include "Header.hpp"

int main()
{
    Data *data;
    void *raw;

    raw = serialize();
    data = deserialize(raw);

    std::cout << "The size of structure 'Data' is " << sizeof(Data) << std::endl;
    std::cout << "random string 1 AFTER serialization: " << data->s1 << std::endl;
    std::cout << "random int AFTER serialization:      " << data->i << std::endl;
    std::cout << "random string 2 AFTER serialization: " << data->s2 << std::endl;
}