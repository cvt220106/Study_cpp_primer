//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // for语句的语法形式 for (init-statement; condition; expression) statement
    // 关键for及括号里部分称作for语句头
    // init-statement必须时三种形式中的一种：声明语句、表达式语句或者空语句
    // 一般情况下，init-statement负责初始化一个值，这个值会随着循环的进行而改变
    // condition作为循环控制的条件，只要condition为真，就执行一次statement，若condition第一次求值就为false，则statement一次都不会执行
    // expression负责修改init-statement初始化的变量，这个变量正好就是condition检查的对象，修改发生在每次循环迭代之后
    // statement可以是一条单独的语句也可以是一条复合语句用块来括起来

    // 传统for循环的执行流程
    string s = "hello world";
    // 重复处理s中的字符直至我们处理完全部字符或者遇到了一个表示空白的字符
    for (decltype(s.size()) index = 0;
         index != s.size() && !isspace(s[index]); ++index)
        s[index] = toupper(s[index]);  // 将当前在字符改写成大写形式
    cout << s << endl;
    // 求值顺序为：
    // 1.循环开始时，首先执行一次init-statement，此例中，定义index并初始化为0
    // 2.接下来判断condition，如果index不等于s.size()而且在s[index]位置的字符不为空白，则执行for循环体的内容
    // 否则，循环终止，若第一次迭代时condition判别为false，则循环体一次都不会执行
    // 3.如果条件为真，执行循环体，例子中，执行的是将s[index]处的字符变为大写形式
    // 4. 最后执行expression，此例中是将index+1
    // 整个for循环过程中，第一步只在循环开始时执行一次，第二三四步重复执行直到条件为假时终止
    // 也就是在s[index]为空白字符或index大于等于s.size()时终止

    // for语句头中定义的对象只在for循环体内可见

    // for语句头中的多重定义
    // init-statement也可以定义多个对象，但是只能有一条声明语句，因此所有变量的基础类型必须相同
    // 通过循环将vector中元素拷贝一份添加到原来的元素后面
    // 因为添加过程中vector的size会不断改变，因此一开始需要记录下原始大小
    vector<int> v {1, 2, 3, 4, 5,};
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;
    // init-statement中同时定义了索引i和循环控制变量sz
    for (decltype(v.size()) i = 0, sz = v.size(); i != sz ; ++i) {
        v.push_back(v[i]);
    }
    for (auto value : v) {
        cout << value << " ";
    }
    cout << endl;

    // 省略for语句头的某些部分
    // for语句头能省略掉init-statement、condition和expression中的任意一个（或者全部）
    // 若为无需初始化，则可以用一个空语句作为init-statement
    // 寻找vector中第一个负数
    auto beg = v.begin(); // 外部已经进行了初始化，因此下面for循环无需初始化，用空语句替代
    for (/* 空语句*/; beg != v.end() && *beg >= 0; ++beg)
        ; // 什么都不做，for循环后比较beg与v.end()即可知道知否存在负值

    // 省略condition的效果相当于条件部分写了一个true，若循环体内没有终止循环的语句，则会一直循环执行下去
    for (int i = 0; /* 空语句*/; ++i) {
        if (i == 99999) {
            cout << i << endl;
            break; // condition为空语句，通过循环体内的break语句来终止循环
        }
    }

    // 省略for语句头中的expression，但是这样的循环中要求条件部分或循环体必须改变迭代变量的值
    // 不断将整数读入vector的while循环改写为for循环
    vector<int> v2;
    for (int i; cin >> i && i != 99999; /*空语句*/) {
        v2.push_back(i);
    }
    // 因为条件部分能够改变i的值，因此循环体无需表达式的部分，条件部分不断检查输入流的内容
    // 只要读取完所有的输入或者遇到一个输入错误就终止错误
}