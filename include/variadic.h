#ifndef VARIADIC_H_
#define VARIADIC_H_

#include <iostream>

namespace cppcourse {

template<typename T>
T sum(T t) { return t;}

template<typename T, typename... R>
T sum(T t, R... r)
{
    t += sum(r...);
    return t;
}

template<typename T, typename... R>
T mean(T t, R... r)
{
    t += sum(r...);
    t /= (sizeof...(r) + 1);

    return t;
}

template<typename T, typename... R>
T wmean(T t, T wt, R... r)
{
    t *= wt;
    t += sum(r...);
    t /= (sizeof...(r) + wt);

    return t;
}

}
#endif