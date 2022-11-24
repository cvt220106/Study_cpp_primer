//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 5.20 寻找连续重复出现的单词并输出，若不存在，则输出相关信息
    string word, pre;
    while (cin >> word && word != "00") {
        if (pre == word) {
            cout << word << endl;
            break; // 前面一个word等于当前新输入的word，说明出现连续出现的单词，break终止循环
        }
        pre = word; // 没有出现连续的单词，更新前一个单词记录
    }
    if (pre != word) {
        cout << "not exist repeat word" << endl;
    }
}
