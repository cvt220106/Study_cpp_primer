//
// Created by jacky on 2022/11/10.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 3.21 使用迭代器重写输出vector对象包含的元素
    vector<int> v1; // 没有元素，为一个空vector
    vector<int> v2(10); // 10个元素，元素值均为默认int型初始化值0
    // 范围for遍历输出验证
    for (auto it = v2.cbegin(); it != v2.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v3(10, 42); //10个元素，元素值为指定初始化值42
    for (auto it = v3.cbegin(); it != v3.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v4 {10}; // 1个元素，为列表中对应元素值10
    for (auto it = v4.cbegin(); it != v4.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v5 {10, 42}; // 2个元素，为列表中对应元素值10,42
    for (auto it = v5.cbegin(); it != v5.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<string> v6 {10}; // 10个元素，为字符串对象默认初始化值空字符串
    cout << "v6元素个数：" << v6.size() << endl;
    for (auto it = v6.cbegin(); it != v6.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<string> v7 {10, "hi"}; // 10个元素，为指定初始化值“hi”
    for (auto it = v7.cbegin(); it != v7.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 3.22 将text的一段都改写为大写形式
    string text = "string text hello world \n"
                  "根据换行符来识别是否换段";
    cout << text << endl;
    for (auto it = text.begin(); it != text.end() && *it != '\n'; ++it) {
        *it = toupper(*it);
    }
    cout << text << endl;

    // 3.23 通过迭代器将vector中整数乘2并输出
    vector<int> nums;
    for (int i = 0; i != 10; ++ i) {
        nums.push_back(i*i);
    }
    for (auto value : nums) {
        cout << value << " ";
    }
    cout << endl;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        *it *= 2;
    }
    for (auto value : nums) {
        cout << value << " ";
    }
    cout << endl;
}

