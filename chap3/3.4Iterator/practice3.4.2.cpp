//
// Created by jacky on 2022/11/10.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 3.24 使用迭代器重做3.20的练习
    // 1.输出vector中相邻元素的和
    int num;
    vector<int> nums;
    while (cin >> num) {
        if (num == 99999) {
            break;
        }
        nums.push_back(num);
    }
    for (auto it = nums.cbegin(); it != nums.cend() - 1; ++ it) {
        cout << *it + *(it + 1) << " ";
    }
    cout << endl;
    // 2.输出vector中顺数第n个和倒数第n个数的和
    for (auto left = nums.cbegin(), right = nums.cend() - 1; left <= right; ++left, --right) {
        cout << *left + *right << " ";
    }
    cout << endl;

    // 3.22 使用迭代器实现划分分数段的程序
    unsigned grade;
    vector<unsigned> scores(11, 0);
    auto it = scores.begin();
    while (cin >> grade) {
        // 以99999作为终结符
        if (grade == 99999) {
            break;
        }
        if (grade > 0 && grade <= 100) {
            // 过滤无效成绩
            ++ *(it + grade / 10);
        }
    }
    for (auto value : scores) {
        cout << value << " ";
    }
    cout << endl;

    // 3.26
    // 使用迭代器进行二分查找时，mid = beg + (end - beg) / 2
    // 而不是常见下标时的mid = (beg + end) / 2
    // 原因在于迭代器版本中mid本身也是一个迭代器，而此时的end - beg得到的是一个有符号数，需要与一个迭代器相加才能得到迭代器
}