//
// Created by jacky on 2022/11/20.
//
#include <iostream>

using namespace std;

int main() {
    // 5.1 什么是空语句，什么时候用到空语句
    // 空语句--只含有一个单独的分号
    // 常用与语法上需要一条语句，但逻辑上不需要，此时便可用空语句进行替代

    // 5.2 什么是块，什么时候用到块
    // 复合语句用{}括起来的语句与声明的序列，也称作块，一个块就是一个作用域
    // 常使用于语法上需要一条语句，逻辑上需要多条语句，则可以使用复合语句
    // 常见于while循环和for循环，需要在循环体内进行多种事件，就需要把语句序列转为块

    // 5。3 使用逗号控制符，改写while循环，使之不再使用块
    int sum = 0, val = 1;
    while (val != 10) {
        sum += val;
        ++val;
    } // 使用块
    cout << sum << endl;
    sum = 0; val = 1; // reset
    while (val != 10)
        sum += val, ++ val; // 使用逗号控制符

    cout << sum << endl;
    // 改写后代码可读性下降
}