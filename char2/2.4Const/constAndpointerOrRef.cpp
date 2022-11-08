//
// Created by jacky on 2022/11/7.
//
#include <iostream>

using namespace std;

int main () {
    // const 用于将变量对象修饰为常量，即使该对象无法进行修改
    // 不同文件中共用const常量要通过extern 对const变量就行初始化与使用声明

    // const的引用
    // 在这里，const修饰的引用类型，不再要求引用类型与指向对象的类型一直
    const int ci = 1024;
    const int &ri = ci; // 引用与其对象都是const int
    cout << ci << " " << ri << endl;
    int i = 100;
    const int &r2 = 100; // const常量引用可以直接对常量值引用
    const int &r3 = i * 2; // 还可以对表达式值进行引用
    cout << r2 << " " << r3 << endl;
    double d = 3.14;
    const int &r4 = d;  // 甚至不要求引用对象的类型，但其实其引用已经不是d这个变量
    cout << d << " " << r4 << endl;
    // 而是d隐式转变为int型的临时量tmp，再对tmp进行了引用
    const int tmp = d;
    const int &r5 = tmp;
    cout << d << " " << tmp << " " << r5 << endl;
    // 当const引用指向的是一个非const的对象时，只是不能通过const引用本身去修改对象
    // 对象自身及其非const引用都可以修改对象

    cout << "-------------------------" << endl;

    // const与指针
    // 这里指针与引用有同样的性质，不再要求指针与指向对象具有相同的类型
    // 指向常量的指针
    const double pi = 3.1415;
    const double *pDouble = &pi; // 指向double常量大的const double指针
    // 因为指针与对象都是常量，因此自身修改与通过指针修改都不可行！
    // 指向普通变量, 这里const修饰的不是指针，因此指针可以修改指向对象
    double dval = 3.14;
    pDouble = &dval;
    // 但由于指针是指向double常量的指针，因此不能通过指针修改变量
    // 但可以通过其他方式修改变量
    cout << *pDouble << endl;
    dval = 100;
    // *pDouble = 100; 错误！
    cout << *pDouble << endl;

    // const指针------指针指向的内存地址不能变！
    int val = 0;
    int *const pval = &val; // pval作为const指针，始终指向val
    // const指针不能更改指向对象，指向对象可修改值
    cout << *pval << endl;
    val = 100;
    cout << *pval << endl;
    // 若const指针指向const常量，那么就二者都不可改变了！

    // 2.4.2
    // 声明语句合法性
    // int j = -1, &rj = 0; // 错误，普通基本类型的引用不能初始化指向常量
    const int j = -1, &rj = 0; // 合法，const常量的引用初始化无约束
    const int i2 = i, &ri1 = j; // 合法 int型常量的引用
    const int *p1  = &i2; // 合法，指向常量的指针p1指向了常量i2
    // int *const p2 = &i2; 不合法，const指针指向的int类型，但i2是const int类型的常量
    const int *const p3 = &i2; // 合法指向常量的const指针指向了常量i2
    // const int &const r2; 不合法，引用本身并不是一个对象，不能用const修饰
    // const int *const pp1; // 不合法，必须声明要指针多指向对象
    const int *pp1; // 合法
    int k = j; // 合法，const常量可用于对应type变量的初始化


    /**
     * 总结：
     * 普通类型的声明可以用同类型常量初始化
     * 对普通类型的引用，指针，常量指针都必须指向对应类型的对象
     * 对const常量类型的引用，指针，常量指针则没有特殊要求
     */
     int x =10;
     const int *const px = &x;
}