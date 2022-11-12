//
// Created by jacky on 2022/11/10.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 3.30 错误下标索引
//    constexpr size_t array_size = 10;
//    int ia[array_size];
//    for (size_t ix = 1; ix <= array_size; ++ix) {
//        ia[ix] = ix;
//    }
    // 不合法之处在于 ，错误的认为数组的下标索引范围[1,array_size]
    // 实际上索引从0开始，索引范围实际为【0，array_size - 1]

    // 3.31 让一个包含10个元素的数组的值为其下标值
    int arr[10];
    // 法1下标索引
    for (size_t i = 0; i < 10; ++i) {
        arr[i] = i;
    }
    for (auto value : arr) {
        cout << value << " ";
    }
    cout << endl;
    // 法2，范围for加index
    int index = 0;
    for (auto &value : arr) {
        value = index;
        ++index;
    }
    for (auto value : arr) {
        cout << value << " ";
    }
    cout << endl;

    // 3.32 将上一题的数组拷贝给另一个数组
    int arr2[10];
    for (size_t i = 0; i < 10; ++i) {
        arr2[i] = arr[i];
    }
    for (auto value : arr2) {
        cout << value << " ";
    }
    cout << endl;

    // 通过vector实现元素值等于下标值
    vector<int> v (10);
    index = 0;
    for (auto &value : v) {
        value = index;
        ++index;
    }
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;

    // 3.33 对于前面实例的程序中
    /**
     * unsigned scores[11]; 与unsigned socres[11] = {};的区别
     * 前面我们说过对于数组而言，在main函数内部进行初始化时
     * 如果直接声明定于，并不会像vector那样都默认初始化为0，而是得到一些随机的初始化值
     * 而通过列表初始化传入一个空列表时，就可以解决这个问题，得到初始化值均为0的数组
     */
}
