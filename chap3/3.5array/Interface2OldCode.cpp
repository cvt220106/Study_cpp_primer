//
// Created by jacky on 2022/11/12.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // string对象和C风格字符串
    // string对象操作中能用到字符串字面值的地方均可以用末尾包含空字符的字符数组替代
    // string对象初始化时
    string s("Hello world");
    char c1[] = "Hello world";
    string s1(c1); // 和s的定义一致
    cout << s << " | " << s1 << endl;

    // string对象加法拼接时
    string s2 = s + "ni hao";
    char c2[] = "ni hao";
    string s3 = s + c2; // 与s2的拼接加法一致
    cout << s2 << " | " << s3 << endl;
    // 同理复合赋值运算+=等也可以有相同效果！

    // 反过来，string对象变为c风格字符串，需要借助c_str函数
    // 该函数返回const char*指针,指向一个以空字符结束的字符数组
//    char *str = s; // 不合法！不能用string对象初始化char*
    const char *str = s.c_str(); //合法
    cout << s << " | " << str << endl;
    // 使用数组初始化vector对象!
    int int_arr[] = {0, 1, 2, 3, 4, 5};
    vector<int> ivec(begin(int_arr), end(int_arr));
    for (auto value : ivec) {
        cout << value << " ";
    }
    cout << endl;

    // 还可以选择数组的一部分用来初始化vector对象
    // 拷贝了int_arr[1],int_arr[2],int_arr[3]，相当于左闭右开的
    vector<int> subVec(int_arr + 1, int_arr + 4);
    for (auto value : subVec) {
        cout << value << " ";
    }
    cout << endl;
}
