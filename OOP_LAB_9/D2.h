#ifndef D2_H
#define D2_H

#include "D1.h"
#include <iostream>

class D2 : public D1 {
private:
    int d2;
public:
    D2(int valueB1 = 0, int valueB2 = 0, int valueD1 = 0, int valueD2 = 0)
        : D1(valueB1, valueB2, valueD1), d2(valueD2) {}
    ~D2() {}
    void show() const override {
        std::cout << "Class D2, d2 = " << d2 << std::endl;
        D1::show();
    }
};

#endif // D2_H
