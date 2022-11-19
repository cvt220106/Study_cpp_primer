//
// Created by jacky on 2022/11/19.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Sales_data{
    int book_no;
    int sales_num;
    double revenue;
};
int main() {
    // sizeof运算符返回一条表达式或一个类型名字所占得字节数
    // 满足右结合律，返回值位一个size_t类型得constexpr（常量表达式）
    // sizeof(type) sizeof expr
    // 第二种形式中，sizeof返回的是表达式结果类型的大小，但sizeof并不会计算其运算对象的值
    Sales_data data, *p;
    cout << sizeof(Sales_data) << endl; //存储Sales_data类型对象所占的空间大小
    cout << sizeof data << endl; // data的类型的大小,等同于sizeof(Sales_data)
    cout << sizeof p << endl; //指针所占的空间大小
    cout << sizeof *p << endl; // 指针所指类型的空间大小，即sizeof(Sales_data
    cout << sizeof data.revenue << endl; // Sales_data的revenue成员对应类型的大小
    cout << sizeof Sales_data::revenue << endl; // 另一种获取revenue大小的方式

    // sizeof *p，p即使是一个无效指针，即未初始化的指针也不影响，因为sizeof并不会去真正解引用获取指针所指的值
    // 不需要真正解引用也可以知道对应的类型！

    /**
     * sizeof运算符的结果部分依赖于其作用的类型
     * 对char或类型为char的表达爱是执行sizeof运算，返回1
     * 对引用类型执行sizeof运算得到被引用对象所占空间的大小
     * 对指针执行sizeof运算得到指针本身所占空间大小
     * 对解引用指针执行sizeof运算得到指针指向的对象所占空间的大小，指针不需要有效
     * 对数组执行sizeof运算得到整个数组所占空间的大小，等价于对数组中所有的元素各执行一次sizeof运算并将所得结果求和
     * 并不会将数组转换为指针来处理！！
     * 对string对象或vector对象执行sizeof运算只返回该类型固定部分的大小，不会计算对象中的元素占用多少空间
     */

    string s = "a";
    cout << sizeof(string) << " " << sizeof s << endl; // 32 32
    cout << sizeof(vector<int>) << endl; // 24
    vector<int> v {1, 2, 3, 4};
    cout << sizeof v << endl; // 24 与对象内元素个数无关！

    // 使用sizeof运算获取整个数组的大小
    int arr[] {1, 2, 3, 4};
    constexpr size_t sz = sizeof(arr) / sizeof(*arr);
    cout << sz << endl;
}