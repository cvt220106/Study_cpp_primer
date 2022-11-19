//
// Created by jacky on 2022/11/19.
//
#include <iostream>

using namespace std;

int main() {
    // 4.28 输出每一种内置类型所占的空间
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(char) << endl;
    cout << "short: " << sizeof(char) << endl;
    cout << "long: " << sizeof(char) << endl;
    cout << "long long: " << sizeof(char) << endl;
    cout << "float: " << sizeof(char) << endl;
    cout << "double: " << sizeof(char) << endl;
    int *ip;
    cout << sizeof(ip) << endl; // 8，指针本身所占空间为8

    // 4.29推断代码输出结果
    int x[10];
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl; // 10
    cout << sizeof(p)/sizeof(*p) << endl; // 2(8/4)
    /**
     * sizeof运算数组名时，数组名并不是转换为指针来处理，得到的是整个数组所占大小
     * 而sizeof运算指针时，固定返回指针所占大小8
     * 而sizeof(*x)与sizeof(*p)取得都是所指的int类型的大小
     */

    // 4.30根据优先律与结合律将表达式适当加上括号，使之含义不变
    int i, j;
    cout << sizeof i + j << endl; // 4
    // sizeof与+两个运算符同优先律，结合律为从右到左，因此先执行(i+j)再对加和结果进行sizeof
    cout << sizeof(i + j) << endl; // 4
    i = 10; j = 8;
//    sizeof i < j sizeof 优先级高于 <， 因此先执行sizeof(i),在比较sizeof(i)与j
    cout << ((sizeof i) < j) << endl; // 4<8 1
}