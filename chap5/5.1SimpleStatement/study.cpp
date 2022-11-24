//
// Created by jacky on 2022/11/20.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // c++中大多数语句均以分号结束
    // 表达式语句--执行表达式并丢弃求值结果
    int ival = 0;
    ival + 5; // 没有实际用处的表达式语句
    cout << ival << endl; // 有实际意义的表达式语句，将表达式求职结果赋给其他值或输出了结果

    // 空语句--只含有一个单独的分号
    // 常用与语法上需要一条语句，但逻辑上不需要，此时便可用空语句进行替代
    ; // 空语句，不执行任何操作
    int s, sought = 99;
    // 当只用while来进行不断的判断知道遇到想要的值时，可用空语句来替代while循环中的语句
    while (cin >> s && s != sought)
        ; // 空语句

    cout << sought << endl;
    // 使用空语句时最好加上注释，指明是一条空语句

    // 分号不要漏写，也不要多写，有时候多谢会造成错误情况是有害的
    int v1 = 1, v2 = 2;
    ival = v1 + v2; ;//无害的空语句，执行了前面语句后紧接一个空语句无影响
    cout << ival << endl;

    // 额外的分号导致循环体出错
    vector<string> svec {"hi", "hello", "ni hao"};
    vector<string>::iterator iter = svec.begin();
//    while (iter != svec.end()) ; //实际循环体的部分是空语句,导致该循环是一个无限循环语句！
//        ++ iter; // 原本预期的循环体++iter并没有进入循环！

    // 复合语句（块）
    // 复合语句用{}括起来的语句与声明的序列，也称作块，一个块就是一个作用域
    // 在作用域内声明和定义的名字只能在块中的子块访问
    // 常使用于语法上需要一条语句，逻辑上需要多条语句，则可以使用复合语句
    // 常见于while循环和for循环，需要在循环体内进行多种事件，就需要把语句序列转为块
    int val = 1, sum = 0;
    cout << sum << endl;
    while (val != 10) {
        sum += val;
        ++val; // 逻辑上需要执行这两条语句，但while循环只能容纳一条，因此要把执行语句用花括号括起来，成为一个复合语句
    }

    cout << sum << endl;

    // 空块，花括号内部无任何语句，作用等价于空语句
    while (cin >> s && s != sought) {}
}

