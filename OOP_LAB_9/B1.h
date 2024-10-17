#ifndef B1_H
#define B1_H

#include <iostream>

class B1 {
protected:
    int b1;
public:
    B1(int value = 0) : b1(value) {}
    virtual ~B1() {}
    virtual void show() const {
        std::cout << "Class B1, b1 = " << b1 << std::endl;
    }
};

#endif // B1_H
