//
// Created by jacky on 2022/11/23.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 5.14编写一个程序找出连续读入的string对象中连续重复出现的单词
    // 若存在这样的单词，输出重复出现的最大次数，若没有，则输出信息说明没有单词连续出现
    string str, pre;
    int cnt = 0, maxCnt = 0;
    while (cin >> str && str != "0000") {
        if (pre != str) {
            pre = str;
            maxCnt = maxCnt < cnt ? cnt : maxCnt;
            cnt = 1;
        } else {
            ++cnt;
        }
    }
    if (maxCnt != 1) {
        cout << maxCnt << endl;
    } else {
        cout << "no repeat words" << endl;
    }
}
