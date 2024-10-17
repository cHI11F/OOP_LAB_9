#ifndef D1_H
#define D1_H

#include "B1.h"
#include "B2.h"
#include <iostream>

class D1 : private B1, public B2 {
protected:
    int d1;
public:
    D1(int valueB1 = 0, int valueB2 = 0, int valueD1 = 0)
        : B1(valueB1), B2(valueB2), d1(valueD1) {}
    ~D1() {}
    void show() const override {
        std::cout << "Class D1, d1 = " << d1 << std::endl;
        B2::show();
    }
};

#endif // D1_H
