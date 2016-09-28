// "memoized" square
#include <iostream>

#include "square.h"
#include "memoize.h"
#include "memoizer.h"

double square (double n) {return n*n;}

int main () {
	
	cppcourse::Square<double> s;

	std::cout << s(-2) << std::endl;
	std::cout << s(2.1) << std::endl;
	std::cout << s(4) << std::endl;
	std::cout << s(-4) << std::endl;
	std::cout << s(5) << std::endl;

    auto squarem = memo<double, double>(square);
    std::cout << squarem(4) << std::endl;
    std::cout << squarem(4) << std::endl;

    auto squarem2 = Memoizer(square);
    std::cout << squarem2(4) << std::endl;
    std::cout << squarem2(4) << std::endl;

	return 0;
}