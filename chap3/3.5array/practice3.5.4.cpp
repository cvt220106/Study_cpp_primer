//
// Created by jacky on 2022/11/12.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    // 3.37，程序的输出结果判定
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }
    // while循环直到cp指向空字符时才会停止循环，但由于这个字符数组末尾没有空字
    // 因此除了输出该字符数组的内容外，还有可能输出一些不确定的内容

    // 3.38 两个指针相加，相当于是两个内存地址相加，得到一个不清楚的内存地址，因此没有任何意义

    // 3.39 两个string对象比较与两个c风格字符串比较
    string s1 = "hello";
    string s2 = "hellO";
    cout << (s1 > s2) << endl; // string对象直接比较

    const char ca1[] = "hello";
    const char ca2[] = "hell0";
    cout << strcmp(ca1, ca2) << endl; // 通过strcmp进行比较

    // 3.40 将上面定义的两个字符数组进行连接
    cout << ca1 << ca2 << endl;
    char largeStr [13] = {};
    strcpy(largeStr, ca1);
    strcat(largeStr, ca2);
    cout << largeStr << endl;
}
