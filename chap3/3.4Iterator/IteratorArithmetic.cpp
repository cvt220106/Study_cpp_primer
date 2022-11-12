//
// Created by jacky on 2022/11/10.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    /**迭代器的算术运算
     * iter ± n, 迭代器加减一个整数值得到的仍是一个迭代器
     * 新迭代器指示的新位置与原来的迭代器向前或向后移动了若干元素
     * 结果指向容器内一个元素或容器的尾部元素的下一位置
     *
     * iter ± = n; 迭代器加减法的复合赋值语法，加减后将结果赋给自身
     * iter1 - iter2 两个迭代器相减的结果是二者之间的距离，即将运算符右侧的迭代器需向前移动多少个元素
     * 才能得到左值迭代器的位置，当然二者必须是同一容器内一个元素或容器的尾部元素的下一位置
     * 返回值类型difference_type，可正可负，显然是一个有符号数
     */

    // 使用迭代器运算来完成二分查找
    // 二分查找的前提，对象内的元素必须是有序的！
    vector<int> nums {1, 20, 35, 46, 52, 64, 79, 84, 100};
    // 首先定义好搜索范围
    auto begin = nums.begin(), end = nums.end() - 1; // end为有效范围的尾部
    // 初始状态下的中间点
    auto mid = nums.begin() + (end - begin) / 2;
    // 输入要查找的元素
    int target;
    cin >> target;
    // 法一，常规二分，begin与end都参与
    while (begin <= end) {
        if (*mid == target) {
            // 查找到，返回对应元素的下标
            cout << mid - nums.begin() << endl;
            break;
        } else if (*mid < target) {
            // 小于目标值，则目标值在mid的右侧
            begin = mid + 1;
        } else {
            // 大于目标值，则目标值在mid的左侧
            end = mid - 1; // end是有效范围的尾部
        }
        mid = begin + (end - begin) / 2;
    }
    // 法二，对应书中方法，end永远指向有效范围尾部的下一位置，此时终止条件为mid!=end
    // 重置一下
    begin = nums.begin();
    end = nums.end(); // end是有效范围的下一位置
    // 初始状态下的中间点
    mid = nums.begin() + (end - begin) / 2;
    // 输入要查找的元素
    cin >> target;
    while (mid != end) {
        if (*mid == target) {
            // 查找到，返回对应元素的下标
            cout << mid - nums.begin() << endl;
            break;
        } else if (*mid < target) {
            // 小于目标值，则目标值在mid的右侧
            begin = mid + 1;
        } else {
            // 大于目标值，则目标值在mid的左侧
            end = mid; // end始终是有效范围的下一位置！
        }
        mid = begin + (end - begin) / 2;
    }
}

