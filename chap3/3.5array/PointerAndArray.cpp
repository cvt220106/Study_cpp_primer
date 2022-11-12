//
// Created by jacky on 2022/11/12.
//
#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main() {
    // 使用数组名时，编译器会自动将其替换为指向数组第一个元素得指针
    string nums[] = {"one", "two", "three"};
    string *p = &nums[0]; // p指向nums的一个元素
    string *p2 = nums;    // 等同于上一个操作，p2指向nums的第一个元素
    cout << *p << " " << *p2 << endl;
    cout << (p == p2) << endl; // 1 true，说明p与p2相等，指向同一个元素

    cout << "-----------------------------------" << endl;

    // 使用auto进行类型推断
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2(ia); // ia2是整形指针，指向ia的第一个元素
    auto ia3(&ia[0]); // 是上一个语句的编译器实际执行操作，二者等同
    cout << *ia2 << " " << *ia3 << endl;
    cout << (ia2 == ia3) << endl; // 1 true

    cout << "-----------------------------------" << endl;

    // 使用decltype推断类型时，不会出现auto时的类型转换，此时数组名代表的就是数组类型
    // ia4也是一个数组名
    decltype(ia) ia4 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << ia4[4] << endl;
    ia4[4] = 100;
    cout << ia4[4] << endl;

    cout << "-----------------------------------" << endl;

    // 指针也是迭代器，指向数组元素的指针支持vector和string的迭代器的相关运算
    // 通过递增符将指向数组元素的指针向前移动到下一个位置上
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pa = arr;
    cout << *pa << endl; // arr[0]=0
    ++pa;
    cout << *pa <<endl; // arr[1]=1

    cout << "-----------------------------------" << endl;

    // 通过指针像迭代器一样来遍历对象内的元素
    // 前提：获取到指向数组第一个元素的指针和指向数组尾元素的下一位置的指针
    // 通过下标取值范围的下一位来获取指向数组尾元素的下一位置的指针
    int *e = &arr[10];
    for (int *b = arr; b != e; ++b) {
        cout << *b << " "; // 遍历输出arr的元素
    }
    cout << endl;

    cout << "-----------------------------------" << endl;

    // 使用标准库函数begin和end来获取数组的第一个元素指针和数组尾元素的下一位置的指针
    int *beg = begin(arr), *last = end(arr);
    for (;beg != last; ++beg) {
        cout << *beg << " ";
    }
    cout << endl;

    cout << "-----------------------------------" << endl;

    // 指向数组的指针也支持与迭代器类似的各种运算
    // 指针加减一个整数值，结果仍是指针，新指针与原来指针前进或后退了整数值个位置
    constexpr size_t sz = 5;
    int arr2[sz] = {1, 2, 3, 4, 5};
    int *ip = arr2; // ip指向arr2的第一个元素
    int *ip2 = ip + 4; // ip2指向数组的第五个元素
    cout << arr2[4] << " " << *ip2 << endl;

    cout << "-----------------------------------" << endl;

    // 给指针加上一整数时，得到的新指针必须是指向同一数组的其他元素，或者指向同一数组的尾元素的下一位置
    // 如果指向尾部元素的下一位置时，千万并不能使用解引用操作！
    int *ip3 = arr2 + sz; // ip3指向数组arr2的尾元素的下一位置
    cout << (ip3 == end(arr2)) << endl; // 1 true
//    int *ip4 = arr2 + 10; // 不合法，因为超出了数组arr2的范围，该指针没有意义

    // 两个指针相减的结果仍然是他们之间的具体，前提是两个指针时同一个数组内的元素或数组尾部的下一个位置
    // 这一点上与迭代器仍然是一致的
    auto n = end(arr2) - begin(arr2);
    cout << n << endl; // 5,也就是数组arr2的元素个数,类型是ptrdiff_t,与size_t一样是有符号类型

    // 两个指针进行比较
    int *b2 = arr2, *e2 = arr2 +sz;
    while (b2 < e2) {
        cout << *b2 << " ";
        ++b2;
    }
    cout << endl;
    // 比较前提是指针所指对象是相关！

    cout << "-----------------------------------" << endl;

    // 解引用与指针运算的交互，一定要将指针运算括起来先计算！
    int arr3[] = {0, 2, 4, 6, 8};
    int num = *(arr3 + 4); // 获取到的是arr[4]的值
    int num2 = *arr + 4; // 获取到的是arr[0] + 4的值
    cout << num << " " << num2 << endl;

    cout << "-----------------------------------" << endl;

    // 数组下标与指针的关系
    // 因为数组名在编译时会转为指向数组首元素的指针，因此此时的下标值相当于对该指针进行指针运算获取到新的指针所指的值
    int i = arr3[2]; // 相当于*（arr + 2)
    int j = *(arr3 + 2);
    cout << (i == j) << endl; // true
    cout << i << " " << j << endl;

    // 指向指针指向的时数组中的元素以及数组的尾元素的下一位置，都可以执行下标运算！
    // 因此数组下标运算中可以传入负值，这一定不同于string和vector中的下标取值的
    int *p3 = &arr3[3];
    int k = p3[1]; // 相当于*(p + 1)，获取到arr3[4]的元素
    int m = p3[-2]; // 相当于*(p - 2), 获取到arr3[1]的元素
    cout << arr3[4] << " " << k << endl;
    cout << arr3[1] << " " << m << endl;
}