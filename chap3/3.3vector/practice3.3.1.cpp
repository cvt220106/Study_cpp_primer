//
// Created by jacky on 2022/11/9.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 3.12 合法性判断
    vector<vector<int>> ivec; // 合法，ivec内的潜在元素是一个vector<int>对象
//    vector<string> svac = ivec; // 不合法，因为二者vector的内置潜在对象类型不对应
    vector<string> svec(10, "null"); // 合法，初始化的svec中包含10的值为null的string对象
    for (auto s : svec) {
        cout << s << " ";
    }
    cout << endl;

    cout << "------------------------" << endl;

    // 3.13 vector对象包含的元素个数以及元素的值
    vector<int> v1; // 没有元素，为一个空vector
    vector<int> v2(10); // 10个元素，元素值均为默认int型初始化值0
    // 范围for遍历输出验证
    for (auto value : v2) {
        cout << value << " ";
    }
    cout << endl;

    vector<int> v3(10, 42); //10个元素，元素值为指定初始化值42
    for (auto value : v3) {
        cout << value << " ";
    }
    cout << endl;

    vector<int> v4 {10}; // 1个元素，为列表中对应元素值10
    for (auto value : v4) {
        cout << value << " ";
    }
    cout << endl;

    vector<int> v5 {10, 42}; // 2个元素，为列表中对应元素值10,42
    for (auto value : v5) {
        cout << value << " ";
    }
    cout << endl;

    vector<string> v6 {10}; // 10个元素，为字符串对象默认初始化值空字符串
    cout << "v6元素个数：" << v6.size() << endl;
    for (auto value : v6) {
        cout << value << " ";
    }
    cout << endl;

    vector<string> v7 {10, "hi"}; // 10个元素，为指定初始化值“hi”
    for (auto value : v7) {
        cout << value << " ";
    }
    cout << endl;
}