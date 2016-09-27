#include <map>
#include <cmath>
#include "memoize.h"

namespace cppcourse {

template <typename T> class Square {

	mutable
	std::map<T, T> _data;

private:
	auto square(const T& n) const -> T{return n*n;}
public:

	T get(const T& s) const{

		return square(s);
		// return memo(square)(s);
	}


};

}
