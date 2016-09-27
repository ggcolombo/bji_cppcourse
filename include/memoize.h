#ifndef MEMOIZE_H_
#define  MEMOIZE_H_

#include <map>
#include <functional>

template <typename OutType, typename InType>
std::function<OutType (InType)> memo(OutType (*fn)(InType)) {

    std::map<InType, OutType> table;

    return [fn, table](InType args) mutable -> OutType {

        auto memoized = table.find(args);
        if (memoized == table.end()) {
            OutType result = fn(args);
            table[args] = result;
            return result;
        } else {
            std::cout << "Using cache" << std::endl;
            return memoized->second;
        }
    };
}

#endif