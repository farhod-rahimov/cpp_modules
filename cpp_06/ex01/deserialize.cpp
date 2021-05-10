#include "Header.hpp"

Data * deserialize(void * raw)
{
    Data *data;

    data = reinterpret_cast<Data *>(raw);
    return (data);
}
