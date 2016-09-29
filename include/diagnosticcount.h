#ifndef DIAGNOSTICCOUNT_H_
#define DIAGNOSTICCOUNT_H_

#include <iostream>

class DiagnosticCount
{
	static int _count;
	int _index;
public:
	DiagnosticCount() : _index(++_count)
	{
		std::cout << "Creating object no: "  << _index << std::endl;
	}
	virtual ~DiagnosticCount() noexcept(true)
	{
		std::cerr << "Destroying object no: " << _index << std::endl;
	}

};

#endif
