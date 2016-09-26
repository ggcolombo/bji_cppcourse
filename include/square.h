#include <map>
#include <cmath>

namespace cppcourse {

template <typename T> class Square {

	mutable
	std::map<T, T> _data;

private:
	auto square(const T& n) const -> T{return n*n;}

public:

	T get(const T& s) const{

		T pos_s = std::abs(s);
		auto it = _data.find(pos_s);

		if (it == _data.end()){
			std::cout << "New calculation" << std::endl;
			_data[pos_s] = square(pos_s);
		}

		return _data[pos_s];
	}


};

}
