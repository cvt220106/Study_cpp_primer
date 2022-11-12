//
// Created by jacky on 2022/11/12.
//
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    // c++支持c风格的字符串，以字符数组存放字符串并约定以空字符'\0'作为结束
    // 一般都通过指针来操作这些字符串
    // strlen(p) 返回p的长度，空字符不计算在内
    char ca[] = {'C', '+', '+'}; // 不以空字符结束，不是C风格字符串
    // 因此不可以使用strlen函数
    cout << strlen(ca) << endl; // 7 沿着起始位置一路寻找直到遇到空字符

    // 比较字符串 strcmp(p1,p2)，返回一个有符号数，0为相等，正为p1大，负为p2大
    string s1 = "A string example";
    string s2 = "A different string";
    cout << (s1 < s2) << endl; // 0 false

    // 对于C语言字符串就不可直接比较字符串对象名
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";
    cout << (ca1 < ca2) << endl; // 比较的实际是两个指针所指地址值的大小关系

    // 通过strcmp来对c风格字符串进行比较
    cout << strcmp(ca1, ca2) <<endl; // 1 说明ca1>ca2

    // 字符串的拼接与拷贝，目标子夫差的大小由调用者指定，极其不安全！
    string largeStr = s1 + " " + s2;
    cout << largeStr << endl;
    cout << largeStr.size() << endl;

    // 显然c风格字符串不可以直接使用+运算符，因为实际是对应两个指针相加，没有任何意义也非法
    // 需要通过strcat与strcpy来完成拼接与复制
    // 使用前需要提供一个用于存放结果字符串的数组，该数组需要足够大，且由程序员来设定
    char lagreCStr[35] = {};
    strcpy(lagreCStr, ca1);
    strcat(lagreCStr, " ");
    strcat(lagreCStr, ca2);
    cout << lagreCStr << endl;
}