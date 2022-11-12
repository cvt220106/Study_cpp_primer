//
// Created by jacky on 2022/11/8.
//
#include <iostream>

using namespace std;

int main() {
    // （变量）--产生引用
    int a = 3, b = 4;
    decltype(a) c = a; // c为int型
    decltype((b)) d = a; // d为int &的引用类型，双重括号返回的永远是引用类型
    cout << a << " " << c << " " << d << endl;
    ++c;
    ++d;
    ++d;
    cout << a << " " << c << " " << d << endl;

    // 赋值表达式产生引用，引用的类型就是赋值的左值类型
    decltype(a = b) e = a; // e为int &
    cout << a << " " << e << endl;
    ++e;
    cout << a << " " << e << endl;

    /**
     * auto 与 decltype 的相似与不同
     * auto是根据初始化时等号的右值的类型来对初始化的变量的类型进行推断，并且推断过程中会存在忽略顶层const的设计
     * decltype则是需要传入一个变量或表达式来对类型进行推断后，将类型赋给该初始化量
     * 在这个过程中不会忽略传入变量的const属性等，并且通过传入表达式，（变量），以及解引用操作等
     * 都会产生对应引用类型
     */

    int i = 100;
    auto j = i; // j根据i的int类型推断为int型
    decltype(i) k = i; // 此时k同样int型，这种情况下，j，k没有什么区别
    const int ci = 99;
    auto cj = ci; // cj此时为int型，因为auto推断时会忽略掉ci的const属性
    decltype(ci) ck = ci; // ck为const int型，decltype并不存在所谓的忽略const操作
}