#ifndef D3_H
#define D3_H

#include "D1.h"
#include <iostream>

class D3 : private D1 {
private:
    int d3;
public:
    D3(int valueB1 = 0, int valueB2 = 0, int valueD1 = 0, int valueD3 = 0)
        : D1(valueB1, valueB2, valueD1), d3(valueD3) {}
    ~D3() {}
    void show() const override {
        std::cout << "Class D3, d3 = " << d3 << std::endl;
        D1::show();
    }
};

#endif // D3_H
