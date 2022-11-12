//
// Created by jacky on 2022/11/9.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 3.6 范围for将字符串所有字符变为X
    string s1 = "hello world";
    cout << s1 << endl;
    for (auto &c : s1) {
        c = 'X';
    }
    cout << s1 << endl;

    cout << "---------------" << endl;

    // 3.7 将3.6中auto变为char
    string s2 = "hello world";
    cout << s2 << endl;
    for (char &c : s2) {
        c = 'X';
    }
    cout << s2 << endl;
    // 变为char后，与auto并无差别，说明string中单个字符的类型就是char

    cout << "---------------" << endl;

    // 3.8 while与传统for重写3.6
    string s3 = "hello world";
    cout << s3 << endl;
    string::size_type index = 0;
    while (index  < s3.size()) {
        s3[index] = 'X';
        index ++;
    }
    cout << s3 << endl;

    string s4 = "hello world";
    cout << s4 << endl;
    for (string::size_type i = 0; i < s4.size(); i++) {
        s4[i] = 'X';
    }
    cout << s4 << endl;

    cout << "---------------" << endl;

    // 3.9下标取值的不合法操作
//    string s4;
//    cout << s4[0] << endl;
    // 错误点在于没有判断string是否为空，如果为空时，取下标0的字符便会发生错误，并且这种错误编译器并没有提示！

    // 3.10 去除字符串中的标点符号并输出
    string s5;
    getline(cin, s5);
    string res; // 保存最后输出串
    for (auto c : s5) {
        if (!ispunct(c)) {
            res += c; // 非标点符号时保留
        }
    }
    cout << s5 << endl;
    cout << res << endl;

    cout << "---------------" << endl;

    // 范围for合法性检查
    const string a = "Keep out!";
    for (auto &c : a) {
        cout << c << " ";
    }
    // 程序输出正常，说法for语法中的auto，可以看到string对象为常量。因此其中的字符也是常量
    // 而对于auto而言，引用时，const char常量的const为底层const，并不会被忽略，因此c的类型就是const char &
    // 属于是字符常量的引用
    cout << endl;
}