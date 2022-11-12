//
// Created by jacky on 2022/11/8.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // while(cin >> word) {} 一次读入一个词
    // while(getline(cin, line)) {} 一次读入一整行
    /**
     * 输入运算符时，运到空白符则停止输入
     * getline函数，会将空白符一遍读入字符串中，直到换行才会停止输入
     */

    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        if (s1.size() > s2.size()) {
            cout << s1 <<endl;
        } else {
            cout << s2 << endl;
        }
    } else {
        cout << "s1.size() == s2.size()" << endl;
    }

    string str, longStr;
    while (cin >> str) {
        // clion存在bug，无法正确读取EOF，停止输入，因此此处默认0000为停止符号，手动进行停止输入
        if (str == "0000") {
            break;
        }
        longStr += str;
    }
    cout << longStr <<endl;

    string longStr2;
    while (cin >> str) {
        // clion存在bug，无法正确读取EOF，停止输入，因此此处默认0000为停止符号，手动进行停止输入
        if (str == "0000") {
            break;
        }
        longStr2 += str + " ";
    }
    cout << longStr2 <<endl;
}
