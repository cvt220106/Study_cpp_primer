//
// Created by jacky on 2022/11/20.
//
#include <iostream>

using namespace std;

int main() {
    // 5.4 说明语句含义，若存在问题则修改
    /**
     * (a) while (string::iterator iter != s.end()) {}
     * 直到迭代器指向s的string对象的尾部元素的下一个位置才停止循环
     * 但例子中存在错误，iter并未初始化便直接进行了比较，应修改为
     * string::iterator iter = s.begin();
     * while (iter != s.end()) {}
     *
     * (b)while (bool status = find(word)) {}
     * if (!status) {}
     * // 错误，status定义于while循环体中，但if判断在循环体外使用了status，因此不合法
     * 因修改为
     * while (bool status = find(word)) {
     *     if (!status) {}
     * }
     * 每次迭代都定义并初始化status，再通过循环内部if判断来检查status来决定迭代是否继续
     */

}