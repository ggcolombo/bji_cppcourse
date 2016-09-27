// "memoized" square
#include <iostream>

#include "square.h"
#include "memoize.h"

double square2 (double n) {return n*n;}

int main () {
	
	cppcourse::Square<double> s;

	std::cout << s.get(-2) << std::endl;
	std::cout << s.get(2.1) << std::endl;
	std::cout << s.get(4) << std::endl;
	std::cout << s.get(-4) << std::endl;
	std::cout << s.get(5) << std::endl;

    auto square2m = memo<double, double>(square2);
    std::cout << square2m(4) << std::endl;
    std::cout << square2m(4) << std::endl;

	return 0;
}