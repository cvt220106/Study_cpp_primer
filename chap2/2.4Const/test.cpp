//
// Created by jacky on 2022/11/8.
//
#include <iostream>

using namespace std;

int main() {
    // const 指针必须要有初始化
    int i, *p1;
    int *const p2 = p1;
    const int ic = 100;
    const int *const p3 = &ic; // 指向常量的常量指针指向了const int常量ic
    i = ic; // const常量可以用于给同类型变量赋值
//    ic = *p3; // ic作为const int常量，不可再被修改赋值
//    p1 = p3; // p3指向的是const int型， p1指向的是int型，因此不合法
//    p1 = &ic;  // p1指向的是int型值，但ic是const int，类型不对应，不合法
}
