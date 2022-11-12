//
// Created by jacky on 2022/11/10.
//
#include <iostream>

using namespace std;

int main() {
    // 数组除了不可以扩容外，其他用法与vector类似
    // 使用数组完成前面的分数分段统计程序
    unsigned socres[11] = {}; // 使用空的列表初始化，就能得到全0的初始化值
    unsigned grade;
    while (cin >> grade) {
        if (grade == 99999) {
            break;
        }
        if (grade > 0 && grade <= 100) {
            ++ socres[grade / 10];
        }
    }
    // 数组也可以使用范围for逐个访问元素
    for (auto value : socres) {
        cout << value << " ";
    }
    cout << endl;

    /**
     * 使用下标访问数组元素时，也要自身注意好下标的值不要超过范围
     * 这类错误编译器并不能检查出来，需要靠程序员自身来遵守！
     */
}
