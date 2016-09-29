#include <iostream>
using namespace std;

#include "stringprocess.h"

int main()
{
	cout << "Hello, world!" << endl;

	StringProcess sp("Hello, ");
	auto msg = sp.processData(42);
	cout << msg << endl;

	return 0;
}
