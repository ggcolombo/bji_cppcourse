#ifndef NUMBER_H_
#define NUMBER_H_

#include <iostream>

namespace cppcourse {

struct Number {

    Number(){
        pNum = nullptr;
    }
    
    ~Number()noexcept(true){
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

    virtual Number add (const Number& n) const
    {
        return Number(*(pNum) + *(n.pNum));
    }

    Number& operator= (const Number& rhs){
        Number temp(rhs);
        swap(temp);
        return *this;
    }

    friend std::ostream& operator<< (std::ostream& os, const Number& number);

private:
    int* pNum;
};

// This allow polymorphic binary operators,
// i.e. children classes of Number would inherit the operator
// and override the method 'add'
inline Number operator+ (const Number& lhs, const Number& rhs){
    return lhs.add(rhs);
};


std::ostream& operator<< (std::ostream& os, const Number& number){
    return os << *(number.pNum);
};


}


#endif