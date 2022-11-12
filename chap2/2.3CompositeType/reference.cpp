//
// Created by jacky on 2022/11/7.
//
#include <iostream>

using namespace std;

int main() {
    int ival = 100;
    int &refVal = ival;
    int &reVal2 = refVal;
    cout << ival << " " << refVal << " " << reVal2 << endl;

    cout << "\n----------------\n" << endl;
    // 引用只能对变量使用,同时除各别例外外,引用类型应该与变量类型相同
    // 引用必须要指定对应变量进行初始化
    // 引用相当于给变量起一个别名,对引用进行操作相当与对变量操作
    // int &rvall = 1.01; 错误 int &rvall3;错误
    int i = 0, &r1 = i;
    double  d = 0, &r2 = d;
    cout << i << " " << r1 << " " << d << " " << r2 << endl;
    r2 = 3.14159;
    cout << i << " " << r1 << " " << d << " " << r2 << endl;
    r2 = r1;
    cout << i << " " << r1 << " " << d << " " << r2 << endl;
    i = r2;
    cout << i << " " << r1 << " " << d << " " << r2 << endl;
    r1 = d;
    cout << i << " " << r1 << " " << d << " " << r2 << endl;

    cout << "\n----------------\n" << endl;

    int j , &rj = j;
    j = 5;
    rj = 10;
    cout << j << " " << rj << endl;
}
