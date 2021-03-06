#ifndef STRINGPROCESS_H_
#define STRINGPROCESS_H_

#include <string>
#include "iprocess.h"
#include  "diagnosticcount.h"

class StringProcess : public IProcess,
			private DiagnosticCount<StringProcess>
{
	std::string _data;
public:
	StringProcess(const std::string& data): _data(data){}
	std::string processData(int n) override
	{
		return _data + std::to_string(n) + "! :)";
	}
	virtual ~StringProcess() noexcept(true) {};
};


#endif
