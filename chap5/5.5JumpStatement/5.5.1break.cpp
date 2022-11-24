//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // break语句负责终止离他最近的while，do_while,for或switch语句
    // 并从这些语句之后的第一条语句开始继续执行
    // break语句只能出现在迭代语句或switch语句内部、(包括嵌套在此类循环里的语句或块的内部）
    // 作用范围只限于最近的循环或switch
    string buf;
    while (cin >> buf && buf != "00") {
        if (!buf.empty()) {
            break; // break #3
        }
        switch (buf[0]) {
            case '-':
                // 处理到第一个空白为止
                for (auto it = buf.begin() + 1; it != buf.end(); ++it) {
                    if (*it == ' ')
                        break; // #1,离开for循环
                    // ...
                }
                // break #1 将控制权转移至此
                // 剩余的’-‘case处理
                break; // #2.离开switch语句
            case '+':
                // ...
                ;
        } // 结束switch
        // 结束switch：break#2将控制权转移至此
    }// 结束while
    // 结束while：break#3将控制权转移至此
}
