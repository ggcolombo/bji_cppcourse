#ifndef PROCESSFACTORY_H_
#define PROCESSFACTORY_H_

#include <memory>
#include <string>

#include "iprocess.h"
#include "stringprocess.h"
#include "intprocess.h"

class ProcessFactory
{
public:
	enum class ProcessType : unsigned short {STRING, INT};
	static std::shared_ptr<IProcess> create(
		ProcessType desc,
		std::string data
	)
	{
		std::shared_ptr<IProcess> result;
		switch(desc)
		{
			case ProcessType::STRING:
				result = std::make_shared<StringProcess>
					(data);
				break;
			case ProcessType::INT:
				result = std::make_shared<IntProcess>
					(stoi(data));
				break;
		}
		return result;
	}

};
#endif
