//
// Created by jacky on 2022/11/15.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 点运算符. 与箭头运算符->都可以用来访问成员
    // 点运算符获取类对象的一个成员
    // 箭头运算符和点运算符符相关ptr->mem等价于(*ptr).mem
    string s = "a string", *p = &s;
    auto n = s.size(); // 通过.运算符获取到string对象s的size成员
    cout << n << endl;
    n = (*p).size();   // 通过.运算符符获取到p所指对象的size的成员
    cout << n << endl;
    n = p->size();     // 等价于上面的操作
    cout << n << endl;

    // 解引用运算符的优先级低于点运算符,因此要求先执行解引用操作时,因将解引用操作的部分括起来
    // *p.size() 就是一个错误操作,会先执行p.size(),但p作为指针对象,并没有对应的size成员

    // 箭头运算符作用域指针类型的额运算对象,结果为左值
    // 点运算结果取决于成员所属对象的类型,其为左值,则结果为左值,其为右值则结果为右值


}
