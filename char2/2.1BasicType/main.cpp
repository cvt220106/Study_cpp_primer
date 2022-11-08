//
// Created by jacky on 2022/11/7.
//
#include<iostream>
#include<math.h>

using namespace  std;

int main() {
    // 2.1.2
    unsigned u = 10, u2 =42;
    cout << u - u2 << endl; // 4294967264--32位
    cout << (unsigned int) pow(2, 32) - 32 << endl;
    cout << u2 - u << endl;

    int i = 10, i2 = 42;
    cout << i - i2 << endl;
    cout << i2 - i << endl;
    cout << u - i << endl;
    cout << i - u << endl;
    cout << "____________" << endl;

    // 2.1.3
    cout << "Who goes with F\145rgus?\012" << endl;
    // \后数字表示八进制对应数值的ascii码字符
    cout << 3.14e1L << " " << 1024.0f << " " << 3.14L << endl;
    // 科学表示法的long double浮点数 float型浮点数 long double型浮点数

    cout << "\x32\x4d\n\x32\t\x4d\n";
    // 先输出2M 换行后 先输出2 在输出制表符 接着输出M 最后换行
}


