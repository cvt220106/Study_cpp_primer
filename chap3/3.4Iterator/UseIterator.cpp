//
// Created by jacky on 2022/11/10.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 迭代器Iterator提供去对象的间接访问，对于string与容器而言。提供的对象是string与容器内部的元素

int main() {
    // 获取迭代器--begin，end成员
    // begin--返回指向对象的第一个元素怒的迭代器
    // end--返回指向对象尾元素的下一位置的迭代器，没有任何访问的实际含义
    // end用来判断对象是否为空，或迭代器遍历是否已经到了末尾
    // 通过begin == end来判别

    // 使用迭代器访问字符串第一个元素并变为大写
    // 通过解引用符*来获取迭代器所指元素的引用
    string s("hello world");
    cout << s <<endl;
    if (s.begin() != s.end()) {
        // 类似与s.empty()的判空操作
        auto it = s.begin(); // it指向s的第一个字符
        *it = toupper(*it);
    }
    cout << s << endl;

    // 通过迭代器遍历将一个单词变为大写
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
    }
    cout << s << endl;

    /**
     * c++中for循环遍历时，多用！=，是因为所有的容器包括string都支持迭代器
     * 而迭代器均通过与end迭代器的比较来判别，且没有相应的《比较，因此应该习惯使用！=
     */

    // 迭代器类型分为iterator与const_iterator
    // const型与前面常量指针类似，只能读取指向的元素，而不能修改
    vector<int>::iterator it; //it能读写<vector>int的元素
    string::iterator it2; // it2能读写string对象中的字符

    vector<int>::iterator it3; // it3只能都元素
    string::iterator it4; //it4只能读字符

    // 前面介绍了迭代器的类型，相应的begin与end返回的迭代器类型也与之对应
    // 当对象是常量类型，返回的就是const_iterator, 不是常量返回的就是iterator
    // 同时c++11还提供了新成员cbegin与cend，无视对象的类型，指定返回const_itreator
    vector<int> v;
    const vector<int> cv;
    auto v1 = v.begin(); // v1的类型是vector<int>::iterator
    auto v2 = v.cbegin(); // v2的类型是vector<int>::const_iterator
    auto v3 = v.cbegin(); // 此时vector对象是const常量，只能使用cbegin获取
    // v3的类型是vector<int>::const_iterator

    // *解引用与.成员访问的结合
    // 对于元素是类对象时，解引用后还会有执行.访问类中相应属性成员函数等操作
    vector<string> strs{"hello", "", "world", "", "ni hao", "!"};
    // 通过迭代器解引用访问搭到string对象，再通过empty判空，过滤空字符串再输出
    for (auto it = strs.cbegin(); it != strs.cend(); it++) {
        if (!(*it).empty()) {
            cout << *it << " ";
        }
    }
    cout << endl;

    /**
     * 要注意解引用与成员访问操作共同进行时，解引用操作一定要括起来
     * （*it).empty 合法，先解引用获取到string对象，再进行判空
     *  *it.empty 不合法，会先执行it.empty,但it是迭代器，并没有empty成员
     */

    // 为了避免这种问题，以及简化操作，c++推出箭头运算符->，将解引用与访问成员合二为一
    for (auto it = strs.cbegin(); it != strs.cend(); it++) {
        if (!it->empty()) {
            cout << *it << " ";
        }
    }
    cout << endl;

    /**
     * 与范围for循环中不能对vector对象添加元素一样
     * 使用了迭代器的循环体，都不要想迭代器所属的容易添加元素！
     */
}