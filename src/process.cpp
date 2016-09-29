#include <iostream>
#include <vector>

using namespace std;

#include "stringprocess.h"
#include "intprocess.h"
#include "processhandle.h"
#include "processfactory.h"

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
	handles.push_back(ProcessHandle(
		make_shared<StringProcess>("one == ")));
	handles.push_back(ProcessHandle(
		make_shared<StringProcess>("two != ")));
	handles.push_back(ProcessHandle(
		make_shared<IntProcess>(1)));
	handles.push_back(ProcessHandle(
		ProcessFactory::create(
			ProcessFactory::ProcessType::STRING, "three != ")));
	handles.push_back(ProcessHandle(
		ProcessFactory::create(
			ProcessFactory::ProcessType::INT, "2")));

	for (auto h : handles)
		cout << h.doProcess(1) << endl;

	cout << "Created a total of "
		<< DiagnosticCount<StringProcess>::getCount()
		<< " string objects and a total of "
		<< DiagnosticCount<IntProcess>::getCount()
		<< " int objects!"
		<< std::endl;

	return 0;
}
