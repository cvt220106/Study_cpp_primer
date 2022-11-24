//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 5.18说明循环的含义并改正其中的错误
    /**
     * (a)
     * do
     *      int v1, v2;
     *      cout << "Please enter two numbers to sum: ";
     *      if (cin >> v1 >> v2)
     *          cout << "Sum is: " << v1 + v2 << endl;
     * while (cin);
     * 循环会先提示用户输入两个数字，然后输出二者的和
     * 条件部分检查用户做出的回答是，但没有任何输入，因此条件会一直为true不断循环
     * 并且 循环体部分有着多条语句，应该用块进行括起来作为一个复合语句
     * 修改为
     * string rsp;
     * do {
     *      int v1, v2;
     *      cout << "Please enter two numbers to sum: ";
     *      if (cin >> v1 >> v2)
     *          cout << "Sum is: " << v1 + v2 << endl;
     * } while (cin >> rsp && !rsp.empty() && rsp[0] != 'n');
     *
     * (b)
     * do {
     *      // ...
     * } while (int ival = get_response()); // 错误do while不能在条件部分进行变量的声明
     * 循环含义：先执行一次循环体，然后根据返回值判断是否继续执行循环
     * int ival;
     * do {
     *      // ...
     * } while (ival = get_response());
     *
     * (c)
     * do {
     *      int ival = get_response();
     * } while (ival);
     * // ival是在循环体内定义，condition时使用ival超出了它的作用域
     * 修改为
     * int ival;
     * do {
     *      ival = get_response();
     * } while (ival);
     */

    // 5.19 编写程序，使用do while循环重复地执行下述任务：先提示用户输入两个string对象，然后跳出较短的那个输出
    string rsp;
    do {
        string s1, s2;
        cout << "Please enter two string: ";
        cin >> s1 >> s2;
        cout << (s1.size() < s2.size() ? s1 : s2) << "\n\n";
        cout << "More? Enter yes or no: ";
    } while (cin >> rsp && !rsp.empty() && rsp[0] != 'n');

}
