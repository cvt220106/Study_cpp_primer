//
// Created by jacky on 2022/11/15.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 解引用运算符的优先级低于递增运算符和点运算
    vector<string> v {"0a", "1b", "", "3d", "4e"};
    auto iter = v.begin();
    cout << *iter++ << endl; // 合法.解引用当前iter值,同时iter指向下一个对象
//    cout << (*iter)++ << endl; // 不合法,先解引用得到指向的string对象,而string无法递增
//    cout << *iter.empty() << endl; // 不合法,先执行成员访问操作,而iter没有empty成员
    cout << iter->empty() << endl; // 合法,获取iter所指string对象的empty成员
//    cout << ++*iter << endl; // 不合法,string无法递增
    cout << iter++->empty() << endl; // 合法,获取当前元素的empty成员,同时iter向前前进一个元素
    cout << iter->empty() << endl; // 1，现在指向空字符
}
