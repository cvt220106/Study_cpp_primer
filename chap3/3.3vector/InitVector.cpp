//
// Created by jacky on 2022/11/9.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;
// vector属于模板，初始化时需要在<>中指明存放对象的类型

int main() {
    // 默认初始化，初始化一个空的vector，也是最常用的
    vector<int> v1; // v1是一个空vector，潜在对象是int类型

    // 通过拷贝别的vector的元素进行初始化
    vector<int> v2 (v1);
    vector<int> v3 = v1; //以上两种方式等价，都是将v1的对象拷贝到v2中，适用于两个vector的类型相同

    // 列表初始化vector对象
    vector<int> v4 {1, 2, 3, 4};
    vector<int> v5 = {1, 2, 3, 4}; // 以上两种方式等价，用{}括起多个元素对vetor对象赋值

    // 创建指定数量的元素使用（）
    vector<int> v6 (10); // v6包含重复的执行了10次int型的默认值初始化的对象
    vector<int> v7 (10, -1); // v7包含了10个重复的元素，每个元素的值都被初始化为了-1
    // 在一种方式中，只制定了元素数量，而没有指明具体的初始值时，vector会根据c++的内置类型，自行进行值初始化，并赋给对象
    // 因此若对象的类型不包含的默认的初始化值，这样的定义并不合法！

    /**
     * 要注意将列表初始化与指定数量的初始化分清
     * 二者一个是 {}，一个是（）,若为花括号，{10}仅代表插入了一个值为10的对象
     * 但有时候，{}也可以进行指定数量的初始化，属于是编译器的识别与补救
     */
     vector<string> v8 {10, "hi"};
     vector<string> v9 {10};
     // 但像（）中传入的不是int型那必然就是不合法
//     vector<string> v9 ("hi");
}
