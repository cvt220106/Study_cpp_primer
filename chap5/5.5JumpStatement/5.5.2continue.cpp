//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // continue语句负责终止离他最近的循环中的迭代并立即开始下一次迭代
    // continue语句只能出现在while，do_while,for循环的内部或者嵌套在此类循环里的语句或块的内部
    // 作用范围只限于最近的循环,只有switch语句中嵌套在迭代语句内部时，才能在switch里使用continue

    // continue只是中断当前的迭代，但是仍然继续执行循环，对于while与do while会继续判断条件的值
    // 对于传统for循环来说，会继续执行for语句头的expression，对于范围for语句，则是序列中的下一个元素初始化循环控制变量
    string buf;
    while (cin >> buf && buf != "00") {
        if (buf[0] != '_') {
            continue; // 使用continue只对下划线开头的单词进行处理！
        }
        cout << buf << endl;
    }
}