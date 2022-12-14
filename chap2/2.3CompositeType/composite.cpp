//
// Created by jacky on 2022/11/7.
//
#include <iostream>

using namespace std;

int main() {
    // 指针与引用的声明，将基本类型与指针/引用对应修饰符*/&，要区分开来
    int i = 10, &ri = i, *pi = &i;
    // 三者都是int类型的，通过不同修饰符区分关系
    // i没有修饰符，因此就是int类型的值，ri有&修饰符，因此是对int型变量i的引用
    // pi有修饰符*，因此是int型的指针，指向int型变量i
    cout << i << " " << ri << " " << *pi << endl;
    // 三种方式最后访问的都是i这个变量

    cout << "-------------------" <<endl;

    // 指向指针的指针
    int **pii = &pi; // 第一个*表示指向的对象是int型的指针，第二个*说明pii本身也是一个指针
    cout << "指针pi的地址：" << *pii << "\n"
        << "指针pii指向的指针pi所指向的值：" << **pii << endl;

    cout << "-------------------" <<endl;

    // 指向指针的引用
    // 引用本身并不是对象，因此没有指向引用的指针，但指针本身是对象，因此可以对其引用
    int *&rp = pi; // 指向指针pi的引用rp，其中修饰符&表明rp是一个引用，*表明引用的是一个int型指针
    int j = 100;
    rp = &j; // 引用rp相当与指针pi的别名，此时便是令pi指向了j
    cout << j << " " << *pi << " " << *rp << endl;
    *rp = 0; // *rp相当于取到了指针pi所指向的对象j，然后将该对象赋值为0；
    cout << j << " " << *pi << " " << *rp << endl;
}
