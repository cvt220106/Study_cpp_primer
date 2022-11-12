//
// Created by jacky on 2022/11/7.
//

#include <iostream>
#include <string>

using namespace std;

string global_str;
int global_int;

int main() {
    // 2.2.1
    // 错误输入cin >> int input_values;
    int input_values;
    cin >> input_values;
    cout << input_values << endl;
    // 错误初始化int i = {3.14}; 存在丢失的风险,列表初始化{}不允许
    int i = 3.14, j = (3.14); // 这两种是允许的,并且会自动进行截断转换
    cout << i << " " << j << endl;
    // 错误初始化double salary = wage = 9999.99;
    double salary = 9999.99, wage = salary;
    // 先初始化的可以用作后面的初始化
    cout << salary << " " << wage << endl;

    cout << "\n-----------\n";

    int local_int;
    string local_str;
    cout << global_int << " " << local_int << endl; // 0  0
    cout << global_str << " " << local_str << endl; // "" ""

    cout << "\n-----------\n";
}
