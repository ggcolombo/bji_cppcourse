// file: variadic.cpp
#include <iostream>
#include "variadic.h"

int main()
{
    auto s = cppcourse::sum(1.1, 2, 3, 4, 5, 6);
    std::cout << s << std::endl;
}