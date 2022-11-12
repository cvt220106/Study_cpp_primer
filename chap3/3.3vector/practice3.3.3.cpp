//
// Created by jacky on 2022/11/9.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 3.16前面处理过，跳过

    // 3.17,cin读入一组词，存入vector，再遍历处理每个元素为大写字母
    vector<string> words;
    string word;
    while (cin >> word) {
        if (word == "0000") {
            break;
        }
        words.push_back(word);
    }
    for (auto value : words) {
        cout << value << endl;
    }
    for (auto &value : words) {
        for (auto &c : value) {
            c = toupper(c);
        }
    }
    for (auto value : words) {
        cout << value << endl;
    }

    cout << "--------------------------------" << endl;

    // 3.18 合法性判定
//    vector<int> ivec;
//    ivec[0] = 42; // 不合法，ivec为空，不能采用下标取对应元素
    // 修改如下
    vector<int> ivec;
    if (!ivec.empty()) { // 通过判空分类处理
        ivec[0] = 42;
    } else {
        ivec.push_back(42);
    }
    cout << ivec[0] << endl;

    // 3.19定义含10个元素的vector对象，所有的值都设置为42
    // 方法1，列表初始化，传入10个42值
    vector<int> v1 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    // 方法2，指定数量初始化
    vector<int> v2 (10, 42);
    // 方法3，先初始化空列表，再for循环压入10次
    vector<int> v3;
    for (int i = 0; i< 10; ++i) {
        v3.push_back(42);
    }

    // 3.20
    // 输出每对相邻整数的和
    int num;
    vector<int> nums;
    while (cin >> num) {
        if (num == 99999) {
            break;
        }
        nums.push_back(num);
    }
    for (decltype(nums.size()) i = 0; i < nums.size() - 1; ++i) {
        cout << nums[i] + nums[i + 1] << " ";
    }
    cout << endl;
    // 输出首第n个+尾第n个的和
    for (decltype(nums.size()) i = 0, j = nums.size() - 1; i <= j; ++i, --j) {
        cout << nums[i] + nums[j] << " ";
    }
    cout << endl;
}
