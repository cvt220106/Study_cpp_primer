//
// Created by jacky on 2022/11/19.
//
#include <iostream>

using namespace std;

int main() {
    // 4.25 int占32位，char占8位，将字符q按位取反再移位，返回结果
    // ~ ‘q' << 6
    // ~优先级最高，且按左结合律，因此先取反，再移位
    // 'q' 0b01110001,会先转为int型，0x00000071
    // 取反后得到0xffffff8e, 再左移6位得0xffffe380
    cout << hex << (~ 'q' << 6) << endl; // ffffe380

    // 4.26将unsigned long 换为unsigned int,取决于int型得位数
    // int现在都是32位因此不做讨论

    // 4.27 表达式结果判断
    unsigned u1 = 3, u2 =7;
    // u1=3=0b0011,u2=7=0b0111
    cout << (u1 & u2) << endl; // 0011 & 0111 = 0011 = 3
    cout << (u1 | u2) << endl; // 0011 | 0111 = 0111 = 7
    cout << (u1 && u2) << endl; // 1 && 1 = 1
    cout << (u1 || u2) << endl; // 1 || 1 = 1
}