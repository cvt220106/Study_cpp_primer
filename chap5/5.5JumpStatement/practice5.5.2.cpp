//
// Created by jacky on 2022/11/24.
//
//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 5.21改写5.20的程序，找到大写字母开头连续重复出现的单词
    string word, pre;
    while (cin >> word && word != "00") {
        if (!isupper(word[0])) {
            pre = word;
            continue; //通过continue删选出大写字母开头的word
        }
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

