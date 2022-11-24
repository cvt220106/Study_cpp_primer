//
// Created by jacky on 2022/11/23.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // while语法形式
    // while (condition) statement
    // 只要condition求职结果一直为真就会一直执行statement（常常是一个块）
    // condition不能为空，若第一次condition求值即为false，则statement一次都不执行
    // while的condition部分可以是一个表达式或是一个带有初始化的变量声明

    // 使用while循环
    // 适用于不清楚具体循环次数。例如读取输入内容时
    // 并且while在需要循环结束后继续访问循环控制变量时更方便
    vector<int> v;
    int i;
    // 循环读取输入，当读入无效数据，输入错误，EOF，以及99999时结束循环
    while (cin >> i && i != 99999) {
        v.push_back(i);
    }
    auto beg = v.begin();
    // 寻找第一个负值元素，vector遍历结束或遇到第一个负值时结束循环
    while (beg != v.end() && *beg >= 0) {
        ++beg;
    }
    if (beg == v.end()) {
        cout << "没有负值！" << endl;
    } else {
        cout << *beg << endl;
    }
}