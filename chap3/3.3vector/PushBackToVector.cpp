//
// Created by jacky on 2022/11/9.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // push_back操作指定值插入当作vector的尾部元素插入到vector对象的尾部
    // 用push_back加上循环，可以十分容易像vector中插入大量元素

    // 指定大量数目进行插入
    vector<int> v1; // 创建空的对象，再通过push_back进行插入
    for (int i = 0; i < 100; ++i) {
        v1.push_back(i);
    }
    for (auto value : v1) {
        cout << value << " ";
    }
    cout << endl;

    // 直到运行通过cin输入才知道具体元素个数时，使用push_back同样方便
    string word;
    vector<string> v2;
    while (cin >> word) {
        // 同样指定0000作为EOF，结束输入
        if (word == "0000") {
            break;
        }
        v2.push_back(word);
    }
    for (auto value : v2) {
        cout << value << " ";
    }
    cout << endl;

    // tip
    // 范围for循环中不可以包含push_back这种改变其所遍历序列大小的操作！
}