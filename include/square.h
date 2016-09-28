#include <map>
#include <cmath>
#include "memoize.h"

namespace cppcourse {

template <typename T> class Square {

private:
	auto square(const T& n) const -> T{return n*n;}
    //std::function<T (T)> msquare = memo<T, T>(square);
    //auto msquare = memo<T, T>(square);

public:

	T get(const T& s) const{

		return square(s);
	}


};

}
