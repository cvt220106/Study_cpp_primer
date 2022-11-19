//
// Created by jacky on 2022/11/15.
//
#include <iostream>

using namespace std;

int main() {
    // 4.8逻辑与，逻辑或及相等性运算符求值顺序
    // 三者都是左结合律的运算符，优先律上： 相等性运算符-> 逻辑与 -> 逻辑或

    // 4.9 解释if判断过程
    const char *cp = "Hello World";
    if (cp && *cp) {
        // 逻辑与左侧运算，判断指针cp是否为空指针mullptr，若为空则为假，不空为真
        // 左侧为真也就是指针cp不为空指针后再判断指针cp所指的对象值是否为空字符，为空字符为假，不空为真
        cout << cp << endl;
    }

    cout << "-------------------------" << endl;

    // 4.10 while循环读入整数，直至42时停止
    int val;
    while (cin >> val && val != 42) {
        cout << val << endl;
    }

    cout << "-------------------------" << endl;

    // 4.11 书写表达式测试a,b,c,d的关系，要求a>b>c>d
    int a = 4, b = 3, c = 2, d =1;
    if ((c > d) && (b > c) && (a > b)) {
        cout << a << ">" << b << ">" << c << ">" << d << endl;
    }

    cout << "-------------------------" << endl;

    // 4.12 说明i!=j<k的含义，三者均为整数
    // 先根据优先律，大小关系->相等性关系，因此先计算的是j<k，得到二者关系的bool值
    // 再计算！=时，上一步计算的bool值转为与i同类型的值，即为1或0，在于i进行比较
}