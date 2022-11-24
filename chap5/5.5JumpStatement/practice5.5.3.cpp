//
// Created by jacky on 2022/11/24.
//
#include <iostream>

using namespace std;

int main() {
    // 5.22改写前面的goto例子，使用循环重写实现
    int i;
    while (cin >> i) {
        if (i <= 0) {
            continue;
        }
        cout << i << endl;
        break;
    }
}
