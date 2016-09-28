#include <map>
#include <cmath>
#include "memoize.h"
#include "memoizer.h"

namespace cppcourse {

template <typename T> class Square {

private:
	auto square(const T& n) const -> T{return n*n;}
    //std::function<T (T)> msquare = memo<T, T>(square);
    // Memoize<T (T)> msquare = Memoize<T (T)>(square);
    // Memoize<T (T)> msquare = Memoizer<T (T)>(square);
    // auto msquare = Memoizer(square);

public:

	T get(const T& s) const{

		return square(s);
	}


};

}
