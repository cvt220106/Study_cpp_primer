//
// Created by jacky on 2022/11/7.
//
#include <iostream>

int i = 42;

int main() {
    std::cout << i << std::endl;
    int i = 100;
    std::cout << i << std::endl;
    int j = i;
    std::cout << j << std::endl;

    int x = 100, sum = 0;
    for (int x = 0; x != 10; x ++) {
        sum += x; // for作用域内独有的x,for结束x结束生命
    }
    std::cout << x << " " << sum << std::endl;

}
