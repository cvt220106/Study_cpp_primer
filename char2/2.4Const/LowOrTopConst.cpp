//
// Created by jacky on 2022/11/8.
//
#include <iostream>

using namespace std;

int main () {
    const int v2 = 0; // 顶层const,v2不可以被修改
    int v1 = v2; // 顶层const可用于初始化,拷贝,对其无影响
    int *p1 = &v1, &r1 = v1; // p1为指向int型的指针,指向了v1,r1为指向v1的引用
    const int *p2 = &v2; // 底层const,p2所指的对象是是一个常量,但指针自身可以修改指向对象
    const int *const p3 = &v1; //第一个const是一个底层const，表明指向的是一个常量，第二个是一个顶层const，表明指针也是一个常量
    const int &r2 = v2; // 底层const， 引用r2指向的是一个常量

    // 合法性检查
    r1 = v2; // 不合法，v2为顶层const，不能被普通int引用绑定
//    p1 = p2; // 不合法，p2包含底层const，p1没有
    p2 = p1; // 合法，对于底层const，存在非常量向常量的转变
//    p1 = p3; // 不合法，p3既包含顶层const，也包含底层const，p1没有
    p2 = p3; // 合法， p2,p3都包含底层const
    /**
     * 对于顶层const，作为拷贝操作的右值，拷贝操作不会对其有任何影响，因此无限制
     * 对于底层const，执行对象的拷贝操作时，等号左右的对象必须具有相同的底层const资格
     * 或者两个对昂的数据类型必须能够进行转换----非常量课转换为常量，常量 = 非常量的语法
     */
     int null = 0, *p = &null;
}

