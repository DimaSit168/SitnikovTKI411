#include <iostream>
#include "./../StaticLib1/StaticLib1.h"

/**
* \brief
* \return
*/

int main()
{
    StaticLib1 stack = { 1, 2, 3, 4, 5 };
    std::cout << stack << std::endl;
    return 0;
}