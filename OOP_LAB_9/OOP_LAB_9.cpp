#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include <iostream>

int main() {
    B1 b1(10);
    B2 b2(20);
    D1 d1(10, 20, 30);
    D2 d2(10, 20, 30, 40);
    D3 d3(10, 20, 30, 50);

    b1.show();
    b2.show();
    d1.show();
    d2.show();
    d3.show();

    std::cout << "Size of B1: " << sizeof(B1) << std::endl;
    std::cout << "Size of B2: " << sizeof(B2) << std::endl;
    std::cout << "Size of D1: " << sizeof(D1) << std::endl;
    std::cout << "Size of D2: " << sizeof(D2) << std::endl;
    std::cout << "Size of D3: " << sizeof(D3) << std::endl;

    return 0;
}
