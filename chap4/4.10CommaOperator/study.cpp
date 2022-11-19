//
// Created by jacky on 2022/11/19.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 逗号运算符含有两个运算对象，按照从左到右的顺序依次求值
    // 和逻辑与，逻辑或以及条件运算符一样，逗号运算符也规定了运算对象求职的顺序
    // 常被用于for循环之中
    vector<int> ivec{1, 2, 3, 4, 5, 6};
    for (auto value : ivec) {
        cout << value << " ";
    }
    cout << endl;
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
        ivec[ix] = cnt;
    }
    // for循环中每次递增ix，递减cnt，每次循环ix，cnt值相应改变，只要ix仍满足条件，就将当前元素值赋值为cnt
    for (auto value : ivec) {
        cout << value << " ";
    }
    cout << endl;
}