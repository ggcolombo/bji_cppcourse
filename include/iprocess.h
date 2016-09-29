#ifndef IPROCESS_H_
#define IPROCESS_H_

class IProcess
{
public:
	virtual ~IProcess() noexcept(true) {};
	virtual std::string processData(int n) = 0;
};

#endif
