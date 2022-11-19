//
// Created by jacky on 2022/11/19.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 4.31使用后置版本递增递减重写study程序
    // 在此程序中，特别是在for循环中，使用前置或后置版本递增递减没有任何差别！
    vector<int> ivec{1, 2, 3, 4, 5, 6};
    for (auto value : ivec) {
        cout << value << " ";
    }
    cout << endl;
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
        ivec[ix] = cnt;
    }
    // for循环中每次递增ix，递减cnt，每次循环ix，cnt值相应改变，只要ix仍满足条件，就将当前元素值赋值为cnt
    for (auto value : ivec) {
        cout << value << " ";
    }
    cout << endl;

    // 4.32 解释下面循环程序的含义
    constexpr int size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    for (int * ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {
        continue;
    }
    // 该for循环中，每次递增ix，指针ptr指向前面一个元素，只要ix满足不等于数组长度以及指针ptr没有指向数组尾部下一个元素

    // 4.33 根据运算符的优先律和结合律解析下面表达式
    int someValue, x, y;
    cin >> someValue >> x >> y;
    someValue ? ++x, ++y : --x, --y;
//    ++x, ++y;
    cout << someValue << " " << x << " " << y << endl;
    // 根据someValue的值是否为0来进行条件判断，若为0.则执行--x。若非0，则执行++x
    // 由于逗号运算符优先级最低，因此条件运算符执行？后的表达式时，只会执行++x这一个语句便结束
    // 而执行：后表达式，也会只执行--x一个，但根据逗号后还有一个语句进行单独执行
}