//
// Created by jacky on 2022/11/12.
//
#include <iostream>

using namespace std;

int main() {
    // 3.43使用范围for，普通for+下标，普通for+指针来对二维数组进行输出
    int ia[3][4] = { // 三个元素，每个元素都是大小为4的数组
            {0, 1, 2, 3}, // 第一行的初始值
            {4, 5, 6, 7}, // 第二行的初始值
            {8, 9, 10, 11}// 第三行初始值
    };
    // 范围for + 指明数据类型
    for (int (&p)[4] : ia) {
        for (int &q : p) {
            cout << q << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    // 普通for + 下标
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    // 普通for + 指针
    for (int (*p)[4] = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    // 3.44 将3.33中程序使用类型别名来替代for中控制变量的类型
    using int_array = int[4];
    // 范围for可改写为
    for (int_array &p : ia) {
        for (int &q : p) {
            cout << q << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    // 普通for + 指针可改写为
    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    // 3.45 使用auto来推测类型改写3.43程序
    // 范围for + 指明数据类型
    for (auto &p : ia) {
        for (auto &q : p) {
            cout << q << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    // 普通for + 下标
    for (auto i = 0; i < 3; ++i) {
        for (auto j = 0; j < 4; ++j) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------------" << endl;

    // 普通for + 指针
    for (auto p = ia; p != ia + 3; ++p) {
        for (auto q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }
}