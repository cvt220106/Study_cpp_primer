//
// Created by jacky on 2022/11/15.
//
#include <iostream>

using namespace std;

int main() {
    // 4.4 给表达式添加括号说明求值的过程
    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
    cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << endl;
    // 根据算术运算符优先级，先计算 / * %后计算+，再根据结合律，从左往右计算

    cout << "---------------------------" << endl;

    // 4.5 写出表达式的求值结果
    cout << -30 * 3 + 21 / 5 << endl; // -86
    cout << -30 + 3 * 21 / 5 << endl; // -18
    cout << 30 / 3 * 21 % 5 << endl;  // 0
    cout << -30 / 3 * 21 % 4 << endl; // -2

    cout << "---------------------------" << endl;

    // 4.6 写出表达式判断整数是奇数还是偶数
    // 奇数和偶数的区别在于对2取余得到的结果是0是1
    int num;
    while (cin >> num) {
        if (num == 99999) {
            break;
        }
        if (num % 2 != 0) {
            cout << num << " is a 奇数" << endl;
        } else {
            cout << num << " is a 偶数" << endl;
        }
    }

    // 4.7 理解溢出
    short sval = 32767;
    sval += 1;
    cout << sval << endl; // 32768超出了short的范围，变为负数-32768
    short sval11 = 16385;
    short sval12 = 16383;
    short mid = (short) (sval11 + sval12) / 2; //想要得到16384的结果，但根据括号无视优先律，相加时就已经溢出
    cout << mid << endl;
    short sval13 = -32768;
    cout << (short) -sval13 << endl; // -32768加负号后变为32768,但超出了short的范围，因此输出还是-32768
}