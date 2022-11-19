//
// Created by jacky on 2022/11/15.
//
#include <iostream>

using namespace std;

int main() {
    // 4.13 赋值完成后i与d的值分别为多少？
    int i;
    double d;
    d = i = 3.5; // i = 3, d = 3
    cout << i << " " << d << endl;
    i = d = 3.5; // i = 3. d = 3.5
    cout << i << " " << d << endl;
    // 原因在于赋值运算符是右结合律

    // 4.14 if语句执行判断
//    if (42 = i) {// 不合法， 42为右值}
    if (i = 42) { // 先执行赋值操作后，再将i转为bool
        cout << i << endl;
    }

    // 4.15 非法操作判断并修改
    double dval;
    int ival;
    int *pi;
//    dval = ival = pi = 0; // 不合法，pi为指针，指针的值不可以赋值给int型
    // 修改为
    int k = 100;
    pi = &k;
    dval = ival = *pi = 0;
    cout << dval << " " << ival << " " << *pi << " " << k << endl;

    // 4.16 修改语句使其执行顺序与预期一致
    /**
     * if (p = getPtr() != 0)
     * 赋值运算优先级低，p未能获取到getPtr返回值作为赋值，而是将getPtr的返回值进行相等性测试后bool值作为了赋值
     * 应该给赋值部分加上括号让其按预期的先执行if ((p = getPtr()) != 0)
     * if(i =1024)
     * 先执行了赋值操作再进行判断，如果需要先判断i的值再进行赋值操作
     * 需要修改为
     * if(i) { i = 1024;}
     */
}