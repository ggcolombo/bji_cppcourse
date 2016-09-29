#include <iostream>
#include <vector>

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

	vector<ProcessHandle> handles;
	handles.push_back(ProcessHandle(make_shared<StringProcess>("one == ")));
	handles.push_back(ProcessHandle(make_shared<StringProcess>("two != ")));

	for (auto h : handles)
		cout << h.doProcess(1) << endl;

	return 0;
}
