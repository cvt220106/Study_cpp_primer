//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    // 5.23 编写程序，从标准输入读取两个整数，输出第一个整数除以第二个整数
    int v1, v2;
    cin >> v1 >> v2;
    cout << v1 / v2 << endl;

    // 5.24 修改上述程序，使得在第二个数是0时抛出异常，不设catch子句，进行观察
//    cin >> v1 >> v2;
//    if (v2 == 0) {
//        throw exception();
//        // terminate called after throwing an instance of 'std::exception'
//        //  what():  std::exception
//    }

    // 5.25 进一步修改5，24程序，使用try语句捕获异常，catch子句为用户输出一条提示信息，询问是否重新输入数据并执行
    while (cin >> v1 >> v2) {
        try {
            if (v2 == 0) {
                throw runtime_error("divide by zero");
            }
            cout << v1 / v2 << endl;
        } catch (runtime_error err) {
            // 提醒用户两个说明必须相同，询问是否重新输入
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n') {
                break; // 跳出while循环
            }
        }
    }
}
