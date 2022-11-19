//
// Created by jacky on 2022/11/19.
//
#include <iostream>

using namespace std;

int main() {
    // 4.36 int *=double,使用类型转换从而实现证书类型的乘法
    int i = 10;
    double d = 3.14;
    i *= d;
    cout << i << endl; // 31
    i = 10;
    i *= static_cast<int>(d);
    cout << i << endl; // 30

    // 4.37 命名的强制转换改写旧式转换语句
//    const string *ps;
//    char *pc;
//    void *pv;
//    pv = (void*)ps;
//    pv = static_cast<void*>(const_cast<string*>(ps));
//    // 转换为先去掉const性质，再转为void*
//
//    i = int(*pc);
//    i = static_cast<int>(*pc);
//
//    pv = &d;
//    pc = (char*) pv;
//    pc = static_cast<char*>(pv);

    // 4.38 说明表达式的含义
    int j = 3;
    double slope = static_cast<double>(j/i);
    // 将j/i所得的整数结果转为double型赋值给slope
    cout << slope << endl;
}
