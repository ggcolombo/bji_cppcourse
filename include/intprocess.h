#ifndef INTPROCESS_H_
#define INTPROCESS_H_

#include <string>
#include "iprocess.h"
#include "diagnosticcount.h"

class IntProcess : public IProcess, private DiagnosticCount
{
	int _data;

public:
	IntProcess(const int& data) : _data(data) {}
	std::string processData(int n) override
	{
		std::string msg = std::to_string(_data) + "+" +
			std::to_string(n) + "=" +
			std::to_string(_data + n);
		return msg;
	}
	~IntProcess() noexcept(true) {}
};

#endif
