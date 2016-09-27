// "memoized" square
#include <iostream>

#include "number.h"

using namespace cppcourse;

int main () {

    Number n1(2), n2(3), n6;
    Number n3 = n1 + n2;
    Number n4 = n1 + 1;
    Number n5 = 10 + n2;
    n6 = n1;
    std::cout << n1 << " "
            << n2 << " "
            << n3 << " "
            << n4 << " "
            << n5 << " "
            << n6 << std::endl;

    return 0;
}