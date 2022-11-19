//
// Created by jacky on 2022/11/19.
//
#include <iostream>

using namespace std;

int main() {
    // 算术转换--将一种算术类型转换成另外一种算术类型
    // 运算符的运算对象会转换为最宽的类型
    // 当表达式中既有浮点数又有整数类型时，整数值转换为对应的浮点类型

    // 整形提升-- 将小整数类型转换成较大的整数类型
    // bool,char,signed char ,unsigned char , short unsigned short,只要值不超过int的范围，都转为int
    // 若超出，则转为unsigned int,如bool型中，false--0，true--1
    // 较大的char类型，wchar_t,char16_t,char_32_t提升为整形int,unsigned int, long unsigned long, long long, unsigned long long
    // 中最小的一种类型，前提是转换后的类型能够容纳原类型的所有可能取值

    // 无符号类型的运算对象
    // 对于运算符两边的运算对象而言，如果存在一个对象的类型为无符号类型，则转换结果需要依赖于机器中各个整数类型的相对大小
    // 1. 如果两个运算对象都是无符号类型，则村从小转大
    // 2. 如果两个运算对象一个有符号，一个无符号，且无符号类型不小于有符号，转为无符号
    // 3. 如果两个运算对象一个有符号，一个无符号，且无符号类型小于有符号
    // 3.1 若无符号类型所有值可存储在带符号类型种，则无符号类型转换为带符号
    // 3.2 反之如不能全部包含，则有符号转为无符号

    // 举例学习
    bool flag; char cval; short sval; unsigned short usval;
    int ival; unsigned int uival;
    long lval; unsigned long ulval;
    float fval; double dval;
    3.14159L + 'a'; // ’a'提升为int，int值再转换为long double
    dval + ival;    // ival转换为double
    dval + fval;    // fval转换为double
    ival = dval;    // dval转换成int(去除小数部分精度)
    flag = dval;    // dval若为0，则flag为false，反之为true
    cval + fval;    // cval提升为int，然后int值转为float
    sval + cval;    // cval和sval都提升为int
    cval + lval;    // cval转换成long
    ival + ulval;   // ival转换成unsigned long
    usval + ival;   // 根据unsigned short与int所占空间进行比较，小向大提升
    uival + lval;   // 根据unsigned int与long所占空间大小进行比较，小向大转换
}
