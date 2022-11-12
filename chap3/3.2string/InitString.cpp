//
// Created by jacky on 2022/11/8.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 初始化string的几种方式
    string s1; // 初始化一个空字符串s1
    string s2 = s1; // 将s1的值的副本初始化为s2的值
    string s3(s1); // 与=号拷贝初始化相同
    string s4("value"); // 直接初始化，s4的值是字面值“value”的副本，除了最后的空字符
    string s5 = "value"; // 等价于s4（“value”）,但属于是拷贝初始化
    string s6(10, 'a'); // 将s6初始化为指定连续个数的指定字符
    cout << "s1:" << s1 << "\n"
            << "s2:" << s2 << "\n"
            << "s3:" << s3 << "\n"
            << "s4:" << s4 << "\n"
            << "s5:" << s5 << "\n"
            << "s6:" << s6 << endl;
    /**
     * 直接初始化与拷贝初始化的区别在于初始化时是否使用 “=”
     */
}