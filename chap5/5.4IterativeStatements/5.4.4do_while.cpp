//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // do while语句与while语句相似，不同之处在于，do while会先执行循环体再检查条件
    // 因此无论条件的值如何，我们都至少执行一次循环
    // do while循环的语法形式为：do statement while (condition);
    // 在do语句中，求condition值前会先执行一次statement，condition不能为空，如果condition的值为加，循环终止
    // 否则，重复循环过程，condition使用的变量必须定义在循环体外！

    // 不断提示用户输入一对数，然后进行求和
    string rsp; // 作为循环的条件，不能定义在do的内部
    do {
        cout << "please enter two values: ";
        int val1 = 0, val2 = 0;
        cin >> val1 >> val2;
        cout << "The sum of " << val1 << " and " << val2
            << " = " << val1 + val2 << "\n\n"
            << "More? Enter yes or no: ";
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
    // 循环会先提示用户输入两个数字，然后输出二者的和并询问用户是否继续
    // 条件部分检查用户做出的回答，若用户没有回答或用户的回答以n开头循环终止，否则循环继续

    // 对于do while来说，先执行语句或者块，后判断条件，所哟不允许在条件部分定义变量
//    do {
//        // ...
//        mumble(foo);
//    } while (int foo = get_foo()); // 错误，将变量声明放在了do的条件部分

}
