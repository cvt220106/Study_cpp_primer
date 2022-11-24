//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // c++11引入了更简单的for语句，这种语句可以用来遍历容器或其他序列的所有元素
    // 范围for语句语法形式 for (declaration : expression) statement
    // expression必须是一个序列，比如用花括号括起来的初始值列表，数组或是vector、string等类型的对象
    // 这些对象的共同特点是拥有返回迭代器的begin和end成员
    // declaration定义一个变量，序列中的每个元素都必须是能转换成该变量的类型
    // 确保类型相同最简单的办法是使用auto类型说明符
    // 如果需要对序列中的元素执行写操作，循环变量必须声明成引用类型

    // 每次迭代都会重新定义循环控制变量，并将其初始化成序列中的下一个值，之后再执行statement
    // statement同样是可以是一条单独的语句，也可以是一个块！所有元素处理完毕后循环终止

    // 使用范围for将vector中对象的每个元素进行翻倍
    vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 范围变量必须是引用类型，才能对元素执行写操作
    for (auto &r : v) {
        r *= 2; // 对于v中的每一个元素，进行元素值的翻倍
    }
    // 等价改写为传统for循环
    for (auto beg = v.begin(), end = v.end(); beg != end; ++beg) {
        auto &r = *beg; // r必须是引用类型，这样才能对元素执行写操作！
        r *= 2;
    }
    // 通过等价形式我们就能更好的理解，为什么范围for循环不能循环过程中添加元素
    // 因此for循环中预存可end()的值，一旦添加或删除元素，end函数的值就可能变得无效了
}