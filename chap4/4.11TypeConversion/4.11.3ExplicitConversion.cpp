//
// Created by jacky on 2022/11/19.
//
#include <iostream>

using namespace std;

int main() {
    // 命名的强制类型转换
    // cast-name<type>(expression);
    // type是转换的目标类型，expreesions是要转换的值,若type是引用类型，则结果为左值
    // cast-name对应static_cast, dynamic_cast, const_cast, reinterpret_cast
    // dynamic_cast支持运行时类型识别，cast-name指定了执行的是哪种转换

    // static_cast
    // 任何具有明确定义的类型转换，只要不包含底层const，都可以使用static_cast
    int i = 10, j = 11;
    double slope = static_cast<double>(j) / i;
    cout << slope << endl;
    // static_cast常用于较大的算术类型赋值给较小的类型
    // 也常用于将void*中的值取出，将void*转为其中值所对应的类型
    void *p = &i;
    int *ip = static_cast<int*>(p);
    cout << *ip << endl; // 但必须确保转换后所得的类型就是指针所指的类型

    // const_cast
    // 只能用于改变运算对象的底层const
    const char *pc;
    char *cp = const_cast<char*>(pc);
    // 去掉const性质！编译器不再阻止对该对象进行写操作，若对象本身不是一个常量，使用强制类型转换获取写权限合法
    // 若对象本身也是一个常量，那么执行写操作就会报错，出现未定义的后果
    // 只有const_cast具有能够改变表达式的常量属性
//    char *q = static_cast<char*>(pc); 不合法，static_cast不能用于转换掉const性质
//    const_cast<string>(cp); 不合法，const_cast只用于改变const属性

    // reinterpret_cast
    // 对运算对象的位模式提供较低层次上的重新解释，比较危险，了解即可

    // 旧式的强制类型转换
    // type(expr); // 函数形式的强制类型转换
    // (type) expr; // c语言风格的强制类型转换
}