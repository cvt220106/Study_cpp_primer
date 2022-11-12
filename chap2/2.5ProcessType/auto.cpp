//
// Created by jacky on 2022/11/8.
//
#include <iostream>
#include <typeinfo>
using namespace std;

int main () {
    int i = 0 , &r = i;
    auto a = r; // a为一个整形变量，值为0；
    cout << a <<endl;
    a = 42;
    cout << a << endl;
    const int ci = i, &cr = ci;
    auto b = ci; // b为一个整形变量，auto中顶层const属性被忽略！
    cout << b << endl;
    b = 42;
    cout << b << endl;
    auto c = cr; // c是整形变量，cr是整形常量ci的别名。其中const作为顶层被忽略
    cout << c << endl;
    c = 42;
    cout << c << endl;
    auto d = &i; // d为整形指针，指向整型变量i
//    d = 42; // 不合法，类型不对应
    auto e = &ci; // e是一个指向整形常量的指针（对常量对象取地址时，const为底层const，保留）
//    e = 42; // 不合法，类型不对应
    auto &g = ci; // g为整形常量引用，指向ci；const为底层const
//    g = 42; // 不合法，绑定的是整型常量，不可以进行修改

    cout << "---------------------" << endl;

    const int x  = 42;
    auto y = x; // y为整形变量，值为42，x的const为顶层，被忽略，推断为int型
    const auto &z = x; // z为整形常量引用，绑定x，x推断为 const int型,因为此时的const是底层const
    auto *p = &x; // x推断为const int的整型常量，因为const为底层const
    const auto y2 = x, &z2 = x; // x推断为int型，y2指出为顶层const。因此y2为const int整形常量
    // z2与z相同
    cout << typeid(y).name() << " " << typeid(int).name() <<endl;
    cout << typeid(z).name() << " " << typeid(const int &).name()<< endl;
    cout << typeid(p).name() << " " << typeid(const int *).name()<< endl;
    cout << typeid(y2).name() << " " << typeid(const int).name()<< endl;
    cout << typeid(z2).name() << " " << typeid(const int &).name()<< endl;
}