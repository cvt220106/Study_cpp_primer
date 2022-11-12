//
// Created by jacky on 2022/11/10.
//
#include <iostream>
#include <string>
using namespace std;

int ia1[10];
string sa1[10];

int main() {
    // 3.27 声明合法性判断
    // txt_size是一个无参函数，返回值是int
    unsigned buf_size = 1024;
//    int ia[buf_size]; // 不合法，buf_size不是常量表达式
    int ia[4 * 7 - 14]; // 合法
//    int ia[txt_size()]; // 不合法，函数未指明是constexpr的函数，返回值不一定是常量表达书
//    char st[11] = "fundamental"; // 不合法，传入的字符个数大于初始化维度

    // 3.28，数组内元素默认初始化观察
    int ia2[10];
    string sa2[10];
    cout << ia1[0] << ", " << ia2[0] << endl;
    cout << sa1[0] << ", " << sa2[0] << endl;

    /**
     * 数组的初始化不同于vector
     * vector在main函数内部执行默认初始化，int型都会是0
     * 而数组根据上面的程序观察，全局数组，即main函数外，会执行默认初始化
     * 但在main函数内毒的局部数组，执行的初始化值不可预测，是随机的！
     */

    // 3.29数组与vector想比的缺点
    /**
     * 1. 数组只能初始化固定容量大小，且不可以扩容，面对未知数量的数据时就不好处理
     * 2. 数组在main函数内的初始化不是对应元素类型的默认初始化，会造成一些不注意的错误
     */
}