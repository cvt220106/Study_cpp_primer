//
// Created by jacky on 2022/11/15.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    /**
     * 关系运算符：作用域算术类型或指针类型
     * 逻辑运算符作用域任意能转换成bool值的类型
     * 二者返回这都是bool值类型
     * 对于bool类型，值为0的运算对象都是假，其余均为真
     * 对于二者而言，运算对象和返求职结果都是右值
     *
     * 优先律： ！ / > < >= <= / == ！= / && / ||
     * 结合律，除了！是右到左，其余均为左到右
     */

    // 逻辑与和逻辑或运算符
    // 逻辑与：两个运算均为真时结果为真
    // 逻辑或：两个运算有一个为真时结果为真
    // 短路操作：二者都是先求左侧运算结果再求右侧运算结果，当且仅当左侧运算对象无法确定表达式结果才计算右侧运算对象
    // 因此短路操作可用于用左侧运算结果来保证右侧运算结果的正确与安全
//    index != s.size() && !isspace(s[index]) 通过左侧的保证index下标的正确性！

    vector<string> text {"hello world", "", "This is your pen.", "ni hao"};
    for (const auto &s : text) {
        cout << s;
        if (s.empty() || s[s.size() - 1] == '.') {
            // 当s为空字符串时或s的最后一个字符为句号时才输出换行
            // 左侧的判断保证了，只有s不空时，才通过下标去判断的正确性
            cout << endl;
        } else {
            cout << " ";
        }
    }
    // 范围for时申明为引用的一个好处在于，当对象比较大时，通过引用便可避免对元素的拷贝操作
    // 这个时候再通过const来确定是否进行写操作

    cout << "-------------------" << endl;

    // 逻辑非操作
    vector<int> ivec;
    if (!ivec.empty()) {
        cout << ivec[0];
    }
    // 通过逻辑非操作，来获取ivec不空的时的状态，从而再输出

    // 关系运算符，比较运算对象的大小关系并返回bool值，满足左结合律
    int i = 10, j = 11, k = 12;
    // 若k大于1时为真
    cout << (i < j < k) << endl; // 实际上是先比较i < j得到的结果bool值转为k对应类型再和k比较！
    // 当j大于i且j小于k时为真
    cout << ((i < j) && (j < k)) << endl; // 返回j > i 且 j < k的bool结果

    // 相等性测试与布尔字面值
    // 测试一个算术对象或指针对象的真值，最直接的就是将其作为if语句的条件
    int val;
    cin >> val;
    if (val) { // 如果val是任意非0的值，条件为真
        cout << val << endl;
    }
    if (!val) { // 如果val为0，条件为真
        cout << val << endl;
    }
    // 在if判断时，val都会先被转换为bool值
    // 但如果是将val与bool值进行比较相等时，就会出现错误
    if (val == true) {
        // 此时val并不会转为bool值，二手true转为val类型值，再和val进行比较
        // 因此只有val等于1时才为真
        cout << val << " is true" << endl;
    }
    if (val == 1) { // 等同于val == true的判断条件
        cout << val << endl;
    }
}