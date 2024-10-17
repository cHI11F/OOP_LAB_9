#ifndef B2_H
#define B2_H

#include <iostream>

class B2 {
protected:
    int b2;
public:
    B2(int value = 0) : b2(value) {}
    virtual ~B2() {}
    virtual void show() const {
        std::cout << "Class B2, b2 = " << b2 << std::endl;
    }
};

#endif // B2_H
