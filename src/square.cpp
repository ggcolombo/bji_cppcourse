// "memoized" square
#include <iostream>

#include "square.h"

int main () {
	
	cppcourse::Square<double> s;

	std::cout << s.get(-2) << std::endl;
	std::cout << s.get(2.1) << std::endl;
	std::cout << s.get(4) << std::endl;
	std::cout << s.get(-4) << std::endl;
	std::cout << s.get(5) << std::endl;

	return 0;
}