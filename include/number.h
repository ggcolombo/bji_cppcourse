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

    Number operator+ (Number& number){
        return Number(*(pNum) + *(number.pNum));
    };

    Number operator+ (int number){
        return Number(*(pNum) + number);
    };

    friend Number operator+ (int n, Number& number);
    friend std::ostream& operator<< (std::ostream& os, const Number& number);

    int* pNum;
};


Number operator+ (int n, Number& number){
    return Number(n + *(number.pNum));
};

std::ostream& operator<< (std::ostream& os, const Number& number){
    return os << *(number.pNum);
};


}


#endif