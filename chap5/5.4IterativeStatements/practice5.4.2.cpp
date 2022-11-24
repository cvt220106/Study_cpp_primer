//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 5.15 说明下列循环的含义并改正其中的错误
    /**
     * (a)int sz = 10;
     * for (int ix = 0; ix != sz; ++ix) {;}
     * if (ix != sz) ; // 不合法，ix初始化与for头中，作用域为for循环体内
     * // 此处使用属于无定义变量
     * 修改为
     * for (int ix = 0; ix != sz; ++ix) {
     *      if (ix != sz) // ...
     *  }
     *
     * (b)
     * int ix;
     * for (ix != sz; ++ix) {...}
     * // 错误点：ix仅仅只是定义了并未初始化，不能直接作为for循环的迭代变脸
     * 修改为
     * int ix = 0;
     * for (ix != sz; ++ix) {...}
     *
     * (c)
     * for (int ix = 0; ix != sz; ++ix, ++sz) {...}
     * sz和ix同时在每次迭代执行加1操作，如果ix一开始不等于sz以及for循环体内没有结束for循环的操作的话
     * 会导致for循环一直执行下去，无法停止！
     * 修改为
     * for (int ix = 0; ix != sz; ++ix) {...}
     */

    // 5.16 对比while循环与for循环
    // 使用while循环不断读入输入，将输入存有在vector中
    vector<int> v;
    int x;
    while (cin >> x && x != 99999 ) {
        v.push_back(x);
    }
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;
    // 使用for循环改写为
    v.clear(); // reset
    for (; cin >> x && x != 99999;) {
        v.push_back(x);
    }
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;

    // 使用for循环求值1-100的和
    int sum = 0;
    for (int i = 1; i != 101; ++i) {
        sum += i;
    }
    cout << sum << endl;
    // 使用while循环改写
    sum = 0; // reset
    int i = 1;
    while (i != 101) {
        sum += i;
        ++i; // while循环一定要记住迭代变量的修改！！！
    }
    cout << sum << endl;
    /**
     * 对于while和for选择问题
     * 对于不确定循环次数且无需进行迭代变量更新时，使用while循环更加简便简洁
     * 对于指明了循环次数，需要不断更新迭代变量的，使用for循环在for语句头里更加清晰
     */

    // 5.17检查一个vector对象是否为另一个vector的前缀
    vector<int> v1 {0, 1, 1, 2};
    vector<int> v2 {0, 1, 1, 2, 3, 5, 8};
    bool flag = true;
    // 获取二者之中长度更短的元素
    int len = v1.size() > v2.size() ? v2.size() : v1.size();
    for (int i = 0; i != len; ++i) {
        if (v1[i] != v2[i]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "exist" << endl;
    } else {
        cout << "not exist" << endl;
    }
}