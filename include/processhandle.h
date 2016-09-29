

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
		return _body->processData(n);
	}

};

