#ifndef MEMOIZER_H_
#define MEMOIZER_H_

#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

template <typename T>
struct Memoize;

template <typename ResultType, typename... ArgTypes>
class Memoize<ResultType(ArgTypes...)>
{
private:
    using StoredResultType = std::pair<std::tuple<ArgTypes...>, ResultType>;

public:
    Memoize(std::function<ResultType(ArgTypes...)> f) : _f(f) {}

    ResultType operator()(ArgTypes... args){
        const auto argsAsTuple = std::make_tuple(args...);
        auto memoized = std::find_if(_table.begin(), _table.end(),
            [&argsAsTuple](const StoredResultType& candidate){
                return candidate.first == argsAsTuple;
            });

        if (memoized == _table.end()){
            auto const r = _f(args...);
            _table.push_back({ {args...}, r});
            return r;
        } else {
            std::cout << "Usin cache ... " << std::endl;
            return memoized.second;
        }
    }

private:
    std::vector<StoredResultType> _table;
    std::function<ResultType (ArgTypes...)> _f;
};


template <typename ResultType, typename... ArgTypes>
Memoize<ResultType (ArgTypes...)>
Memoizer(ResultType f(ArgTypes...)){
    return Memoize<ResultType(ArgTypes...)>(f);
}

#endif
