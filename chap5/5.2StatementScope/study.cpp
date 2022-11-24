//
// Created by jacky on 2022/11/20.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 在控制结构内定义变量，旨在相应控制结构语句中可见
//    while (int i = get_num())  // 每次迭代都创建并初始化i
//        cout << i << endl;
//    i  = 0; // 不合法，无法在控制语句外部访问其内部定义的变量

    // 如果其他代码也需要访问控制变量，那么变量应该定义在语句的外部
    vector<int> v{1, 2, 3, 4, 5, 6};
    auto beg = v.begin();
    // 寻找v中的第一个负值元素
    while (beg != v.end() && *beg >= 0)
        ++beg;
    if (beg == v.end())
        // 就可知v中所有元素都大于等于0
        cout << "v中没有负值元素" << endl;
    // 控制结构定义的对象的值要由结构本身使用，因此这些变量必须初始化
}
