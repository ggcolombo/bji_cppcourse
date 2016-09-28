// file: variadic.cpp
#include <iostream>
#include "variadic.h"

int main()
{
    auto s = cppcourse::sum(1, 2, 3, 4, 5, 6);
    auto m = cppcourse::mean(1, 1, 1, 1, 1, 2, 3, 4, 5, 6);
    auto w = cppcourse::wmean(1, 5, 2, 3, 4, 5, 6);

    std::cout << s/6<< " " << m << " " << w << std::endl;
}