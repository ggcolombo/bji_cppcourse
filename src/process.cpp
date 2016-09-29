#include <iostream>
using namespace std;

#include "stringprocess.h"
#include "processhandle.h"

int main()
{
	cout << "Hello, world!" << endl;

	StringProcess sp("Hello, ");
	auto msg = sp.processData(42);
	cout << msg << endl;

	ProcessHandle ph(std::make_shared<StringProcess>("Greetings, "));
	auto msg2 = ph.doProcess(65);
	cout << msg2 << endl;

	return 0;
}
