//
// Created by jacky on 2022/11/12.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 3.41 使用整型数组初始化一个vector对象
    int arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> v(begin(arr), end(arr));
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;

    // 3.42 将含有整数元素的vector对象拷贝给一个整形数组
    int arr2[6] = {};
    for (int i = 0; i < 6; ++i) {
        arr2[i] = v[i];
    }
    for (auto value : arr2) {
        cout << value << " ";
    }
    cout << endl;
}
