//
// Created by jacky on 2022/11/8.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
//    // 读写string对象
//    string s;
//    cin >> s; // 将string对象读入s，遇到空白停止
//    cout << s << endl;

//    // 连续读取多个
//    string s1, s2;
//    cin >> s1 >> s2;
//    cout << s1 << " " << s2 << endl;

//    // 读取未知个数
//    string word;
//    while (cin >> word) { // 反复读取，直到文件末尾或非法输入
//        cout << word << endl;
//    }

//    // 使用getline读取一整行,传入输入流与string对象，遇到换行符结束输入
//    string words;
//    while (getline(cin, word)) {
//        cout << words << endl;
//    }

//    // empty与size操作
//    string word;
//    while (getline(cin, word)) {
//        if (!word.empty()){// 不为空字符串才输出
//            if (word.size() > 10) { // 字符串长度大于10时才输出
//                cout << word << " " << word.size() << endl;
//            }
//        }
//    }

//   // string对象的比较
//   string s1 = "str";
//   string s2 = "abcd";
//   string s3 = "strr";
//   // 比较规则是, 逐个比较每个位置字符的大小关系，且对大小写敏感，若前面大的字符均相同，再看长度关系
//   cout << (s1 > s2) << endl; // 1-true
//   cout << (s1 > s3) << endl; // 0-false

//   // 两个string对象相加--相当于字符串的拼接，但会产生一个新的对象
//   string s1 = "hello";
//   string s2 = "world";
//   string s3 = s1 + s2;
//   s1 += s2; // 相当于先拼接s1+s2，产生了一个temp字符串，再将该temp的值拷贝给s1
//   cout << s1 << " " << s2 << " " << s3 <<endl;

   // 字面值和string对象相加
   // c++中字面值并不是string对象！
   // +两侧至少要有一个string对象！
   string s1 = "hello", s2 = "world";
   string s3 = s1 + ", " + s2 + "\n";
   string s4 = s1 + ", ";
//   string s5 = "hello" + ", "; // 不合法，至少要有一个string对象
    string s6 = s1 + ", " + "world"; // 合法，从左往右执行，s1 + ”，“后是一个string对象，因此后面的+也合法
    cout << s6 << endl;
    string s7 = "hello" + ", " + s2; // 不合法，从左往右执行，第一个+号不合法，没有string对象
}