//
// Created by jacky on 2022/11/20.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    /**
     * // if语句语法形式
    // if (condition)
    //     statement
    // if else语句的形式
    // if (conditon)
    //     statement
    // else
    //     statement2
    // condition需要用（）括起来，condition可以是表达式，也可以是一个初始化的变量声明，
    // 无论是哪种，都必须能转换成bool类型
    // statement, statement2一般都是块语句
    // if内condition为真，则执行statement，statement执行完成后，继续执行if后其他语句
    // 若condition为假，跳过statement，简单if语句而言，继续执行if后其他语句，if else语句执行statement2
     */

    // 使用if else语句
    // 将成绩转为对应的等级 100-A++. [0,60)-F，[60,69)-D,[70.80)-C,[80,90)-B,[90,100)-A
    const vector<string> scores{"F", "D", "C", "B", "A", "A++"};
    int grade;
    cin >> grade;
    string letterGrade;
    if (grade < 60)
        letterGrade = scores[0];
    else
        letterGrade = scores[(grade - 50) / 10];
    cout << letterGrade << endl;
    // 通过判断grade与60分的关系，选择不同的处理方式

    // 嵌套if语句
    // 在合格成绩的末尾加上一个加号或减号
    // 若成绩末尾8，9--添加加号， 末位0，1，2--添加减号
    if (grade % 10 > 7)
        letterGrade += "+";
    else if (grade % 10 < 3)
        letterGrade += "-";
    cout << letterGrade << endl;

    // 将两段程序结合即为
    letterGrade = "";  // reset
    if (grade < 60)
        letterGrade = scores[0];
    else{
        letterGrade = scores[(grade - 50) / 10];
        if (grade != 100)
            if (grade % 10 > 7)
                letterGrade += "+";
            else if (grade % 10 < 3)
                letterGrade += "-";
    }
    cout << letterGrade << endl;

    // 对于if else语句再不确定statement中语句数时，最好带上花括号将其作为一个块，这样可以有效避免代码混乱不清

    // 悬垂else问题
    // 当嵌套if时，if与if else混用就导致if个数与else不对应，这是后就需要解决if与else对应的问题
    // c++中规定else与其离的最近的尚未匹配的if匹配
    // 下面举例一种错误匹配
    cin >> grade;
    letterGrade = ""; // reset
    if (grade % 10 >= 3)
        if (grade % 10 > 7)
            letterGrade += '+';
    else
        letterGrade += '-';
    cout << grade << letterGrade << endl;
    // 我们本意时else匹配第一个外层if，但实际上else匹配的是内层else，这就会导致尾数位3，4，5， 6的成绩被加上了‘-’

    // 通过添加{}来让if和else正确对应
    letterGrade = ""; // reset
    if (grade % 10 >= 3){
        if (grade % 10 > 7)
            letterGrade += '+';
    } else // 花括号强制else与外层if匹配
        letterGrade += '-';
    cout << grade << letterGrade << endl;
}
