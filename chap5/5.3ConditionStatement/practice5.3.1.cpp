//
// Created by jacky on 2022/11/20.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 5.5 if else 语句实现数字成绩转字母成绩
    const vector<string> scores{"F", "D", "C", "B", "A", "A++"};
    int grade;
    cin >> grade;
    string letterGrade;
    if (grade < 60) {
        letterGrade = scores[0];
    } else {
        letterGrade = scores[(grade - 50) / 10];
    }
    cout << letterGrade << endl;

    // 5.6 使用条件运算符代替if else改写5.5
    letterGrade = ""; // reset
    letterGrade = (grade < 60) ? scores[0] : scores[(grade - 50) / 10];
    cout << letterGrade << endl;

    // 5.7 修改代码段
    /** (a)
     * if (ival1 != ival2)
     *      ival1 = ival2
     * else ival1 = ival2 = 0;
     * if语句中statement没有加上分号，不是一个独立的语句
     * 修改为
     * if (ival1 != ival2)
     *      ival1 = ival2;
     * else ival1 = ival2 = 0;
     *
     * (b)
     * if (ival < minval)
     *      minval = ival;
     *      occurs = 1;
     * statement中未加{},导致实际occurs无论是否满足condition都会执行
     * 修改为
     *  if (ival < minval){
     *      minval = ival;
     *      occurs = 1;
     * }
     *
     * (c)
     * if (int ival = get_value())
     *      cout << "ival = " << ival << endl;
     * if (!ival)
     *      cout << "ival = 0\n";
     * ival在第一个if中定义并初始化，第二个if使用ival时已经超出了其作用域，使用的是一个未定义变量
     * 应将第二个if嵌套入第一个if中作为其的statement的一部分
     * if (int ival = get_value()) {
     *      cout << "ival = " << ival << endl;
     *      if (!ival)
     *          cout << "ival = 0\n";
     * }
     *
     * (d)
     * if (ival = 0)
     *      ival = get_value();
     * ival = 0 是一个赋值语句，赋值后ival=0转为bool为false，if的statement永远都无法执行
     *
     * 修改为，if判断ival与0的关系
     *  if (ival == 0)
     *      ival = get_value();
     */

    // 5.8 什么是悬垂else，c++如何处理
    // 悬垂else
    // 当嵌套if时，if与if else混用就导致if个数与else不对应，这是后就需要解决if与else对应的问题
    // c++中规定else与其离的最近的尚未匹配的if匹配
}
