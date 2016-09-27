// "memoized" square
#include <iostream>

#include "number.h"

using namespace cppcourse;

int main () {

    Number n1(2), n2(3), n6;
    Number n3 = n1 + n2;
    Number n4 = n1 + 1;
    Number n5 = 10 + n2;

    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;
    std::cout << n4 << std::endl;
    std::cout << n5 << std::endl;

    return 0;
}