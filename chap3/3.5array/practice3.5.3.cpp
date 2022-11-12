//
// Created by jacky on 2022/11/12.
//
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    // 3.34 理解程序的作用
    int arr[ ] = {0, 1, 2, 3, 4, 5};
    int *p1 = arr;
    int *p2 = arr + 4;
    cout << *p1 << " " << *p2 << endl;
    p1 += p2 - p1; // p2 - p1得到是两个指针之间的距离，p1 +=该距离后得到的就是p1也指向了p2所指向的位置
    cout << *p1 << " " << *p2 << endl;
    // 当p1，p2指向的不是同一个数组中元素时，该程序就是非法的

    // 3.35 利用指针将数组中的元素置为0
    for (auto value : arr) {
        cout << value << " ";
    }
    cout << endl;
    int *last = end(arr);
    for (int *beg = begin(arr); beg != last; ++beg) {
        *beg = 0;
    }
    for (auto value : arr) {
        cout << value << " ";
    }
    cout << endl;

    // 3.36 比较两个数组是否相等/比较两个vector是否相等
    vector<int> v1 {0, 1, 2, 3, 4};
    vector<int> v2 {0, 1, 2, 3, 4, 5};
    cout << (v1 == v2) << endl; // 0
    bool isEqual = false;
    int arr1[] = {0, 1, 2, 3, 4};
    int arr2[] = {0, 1, 2, 3, 4, 5};
    int *index1 = begin(arr1), *last1 = end(arr1);
    int *index2 = begin(arr2), *last2 = end(arr2);
    auto len1 = last1 - index1;
    auto len2 = last2 - index2;
    auto len = len1 > len2 ? len2 : len1;
    for (decltype(len) i = 0; i != len; ++i) {
        if (arr1[i] != arr2[i]) {
            cout << isEqual << endl;
            return 0;
        }
    }
    if (len1 == len2) {
        isEqual = true;
    }
    cout << isEqual << endl;
    return 0;
}
