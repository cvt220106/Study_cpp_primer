//
// Created by jacky on 2022/11/24.
//
#include <iostream>

using namespace std;

int main() {
    // goto语句仅作了解，基本不在实际中使用
    // 语法形式 ： goto label
    // label是一种特殊语句，形式为标识符加一个冒号 end:
    // goto语句不能跨过带初始化变量定义的语句
    // 向后跳过一个带初始化变量定义是合法的
    begin:
    int i; cin >> i;
    if (i <= 0) {
        goto begin;
    }
    cout << i << endl;
    // 每次goto会销毁i，因为跳回到begin的动作跨过了i的定义语句，所以i将重新定义并获取输入赋值
}