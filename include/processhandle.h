#ifndef PROCESSHANDLE_H_
#define PROCESSHANDLE_H_

#include <string>
#include <memory>
#include "iprocess.h"

class ProcessHandle
{
	std::shared_ptr<IProcess> _body;

public:
	ProcessHandle(std::shared_ptr<IProcess> body) : _body(body) {}

	std::string doProcess(int n)
	{
		return "I am handling this: " + _body->processData(n);
	}

};

#endif
