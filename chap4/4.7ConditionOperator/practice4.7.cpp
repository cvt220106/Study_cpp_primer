//
// Created by jacky on 2022/11/19.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 4.21 使用条件运算符找出vector<int>中的奇数并将其数值翻倍
    vector<int> v{11, 22, 33, 44, 55, 66, 77, 88, 99};
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;
    for (auto value : v) {
        value = (value % 2 != 0) ? value*2 : value;
        cout << value << " ";
    }
    cout << endl;

    cout << "--------------------------------" << endl;

    // 4.22 使用条件运算符或if将成绩分为[0,60) fail,[60,75] low pass, (75,90] pass, (90,100] high paass
    // 条件运算符版
    int grade; cin >> grade;
    string finalGrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
    cout << finalGrade << endl;
    // if判断版
    if (grade > 90) {
        cout << "high pass" << endl;
    } else if (grade > 75) {
        cout << "pass" << endl;
    } else if (grade >= 60) {
        cout << "low pass" << endl;
    } else {
        cout << "fail" << endl;
    }
    // 两个版本比较下来，显然条件运算符嵌套显得更加简洁，但更难读懂，if版本冗长但易于理解

    cout << "--------------------------------" << endl;

    // 4.23 运算符优先级问题查找及修改
    string s = "word";
//    string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
    // 不合法，本表达式中出现了四个运算符：条件运算符，==相等性判断运算符，+ 算术运算符，= 赋值运算符
    // 按优先级运算顺序：+ -》== -》 ？：-》=
    // 因此该语句会先执行s + s[s.size()-1]，再将加和后的对象与‘s’进行相等性判断，但由于==两边对象类型并不相同，因此无法比较出错
    // 修改为如下程序，通过加括号让条件运算符先执行
    string p1 = s + ((s[s.size() - 1] == 's') ? "" : "s");
    cout << s << " " << p1 << endl;

    // 4.24 若条件运算符满足左结合律，就会导致多层嵌套条件运算符在第一层嵌套时便发生失效
    // (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
    // 在第一次条件运算符嵌套时，若为：对应表达式求值，会直接将（grade>75)所得值进行返回，而无视后续语句
    // 从而导致多层嵌套得条件判断失效
}
