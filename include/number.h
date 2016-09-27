#ifndef NUMBER_H_
#define NUMBER_H_

#include <iostream>

namespace cppcourse {

struct Number {

    Number(){
        pNum = nullptr;
    }
    
    ~Number(){
        delete pNum;
    }

    Number(int n)
    {
        pNum = new int(n);
    }

    void swap(Number& n)
    {
        std::swap(this->pNum, n.pNum);
    }

    Number add (const Number& n) const
    {
        return Number(*(pNum) + *(n.pNum));
    }

    Number& operator= (const Number& rhs){
        Number temp(rhs);
        swap(temp);
        return *this;
    }

    friend std::ostream& operator<< (std::ostream& os, const Number& number);

    int* pNum;
};


inline Number operator+ (const Number& lhs, const Number& rhs){
    return lhs.add(rhs);
};


std::ostream& operator<< (std::ostream& os, const Number& number){
    return os << *(number.pNum);
};


}


#endif