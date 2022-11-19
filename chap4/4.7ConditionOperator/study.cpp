//
// Created by jacky on 2022/11/19.
//
#include <iostream>

using namespace std;

int main() {
    // 条件运算符？： cond？ expr1 ：expr2
    // cond是判断条件的表达式，expr1，expr2是两个类型相同或可能转换为某个公共类型的表达式
    // 执行过程：先求cond的值，若条件为阵对expr1求值并返回，反之则对expr2求值并返回
    int grade;
    cin >> grade;
    string finalGrade = (grade >= 60) ? "pass" : "fail";
    cout << finalGrade << endl;

    // 在整个条件运算符的过程中，只对expr1和expr2中一个求值
    // 只有条件运算符的两个表达式都是左值或者可转换乘同一种左值类型时，运算的结果是左值，否则运算的结果是右值

    // 嵌套条件运算符，一个条件运算符可以作为另一个条件运算符中的表达式之以
    finalGrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
    cout << finalGrade << endl;
    // 条件运算符满足右结合律，运算对象一般按照从右到左的顺序组合，因此上式中靠右的条件运算构成靠左条件运算的：分支

    cout << "------------------------" << endl;
    // 在输出表达式中使用条件运算符
    // 条件运算符的优先级非常低，因此长表达式中嵌套条件运算子表达式，需要在其两端加上括号
    cout << ((grade < 60) ? "fail" : "pass") << endl; // 正常输出pass或fail
    cout << (grade < 60) ? "fail" : "pass"; // 输出0或1 先判断grade < 60结果为0，1进行输出，
    // 后续条件运算变为cout ? "fail" : "pass",此时根据cout的值来进行条件判断在产生对应的字面值
//    cout << grade < 60 ? "fail" : "pass";
    // 不合法！该语句试图比较cout与60，（移位运算符优先级高于小于运算符）先将grade的值输出给了cout，然后比较cout与60不合法！
 }
