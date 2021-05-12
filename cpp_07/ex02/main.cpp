#include "Array.hpp"

void main_1()
{
    Array<int> intArray1;
    Array<int> intArray2(10);

    std::cout << "Initialized intArray1 and intArray2" << std::endl;
    std::cout << "The sie of intArray1 is " << intArray1.size() << std::endl;
    std::cout << "The sie of intArray2 is " << intArray2.size() << std::endl << std::endl;

    try {
        std::cout << "Trying to print the 1 element of intArray1, which doesn't exist" << std::endl;
        std::cout << intArray1[100];
    }
    catch (std::exception & e){
        std::cerr << e.what() << std::endl << std::endl;
    }

    for (int i = 0; i < 10; i++)
        intArray2[i] = i + 1;

    std::cout << "Printing all elements of intArray2" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << intArray2[i] << " ";
    std::cout << std::endl << std::endl;
}

void main_copy()
{
    Array<int> intArray1(10);
    Array<int> intArray2(10);

    for (int i = 0; i < 10; i++)
        intArray1[i] = i + 1;
    for (int i = 0; i < 10; i++)
        intArray2[i] = i + 10;
    std::cout << "intArray1 BEFORE copy" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << intArray1[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "intArray2 BEFORE copy" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << intArray2[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "Executing intArray1 = intArray2 " << std::endl << std::endl;
    intArray1 = intArray2;


    std::cout << "intArray1 AFTER copy" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << intArray1[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "intArray2 AFTER copy" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << intArray2[i] << " ";
    std::cout << std::endl << std::endl;

}
void main_copy_constr()
{
    Array<int> intArray1(10);

    for (int i = 0; i < 10; i++)
        intArray1[i] = i + 1;
    Array<int> intArray2(intArray1);

    std::cout << "intArray1" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << intArray1[i] << " ";
    std::cout << std::endl << std::endl;

    std::cout << "intArray2" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << intArray2[i] << " ";
    std::cout << std::endl << std::endl;
}

int main(void)
{
    std::cout << "-----------------THIS_IS_MAIN_1-----------------" << std::endl;
    main_1();
    std::cout << "---------------THIS_IS_MAIN_COPY----------------" << std::endl;
    main_copy();
    std::cout << "--------------THIS_IS_MAIN_CONSTR---------------" << std::endl;
    main_copy_constr();


    std::cout << "NOW RUN leaks program" << std::endl;
    while (1)
        ;
    return (0);
}