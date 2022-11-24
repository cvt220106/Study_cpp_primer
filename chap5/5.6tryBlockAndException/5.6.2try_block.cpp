//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

struct MySales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    // try语句块的通用语法形式
//    try {
//        program-statements
//    } catch (expression-declaration) {
//        handler-statements
//    } catch (expression-declaration) {
//        handler-statements
//    } // ...
    // 一开始是try关键字，随后紧跟一个块，通常使用大括号括起的语句序列
    // 跟在try块后的是一个或多个catch子句，catch子句包括三部分
    // 关键字catch，括号内一个（可能未命名的）对象的声明（称作异常声明）以及一个块
    // 当选中某个catch子句处理异常后，执行与子对应的块
    // catch一旦完成，程序跳转到try语句块最后一个catch子句之后的那条语句继续执行

    // 编写处理代码
    MySales_data data1, data2;
    double price = 0;
    while (cin >> data1.bookNo >> data1.units_sold >> price) {
        data1.revenue = data1.units_sold * price;
        cin >> data2.bookNo >> data2.units_sold >> price;
        data2.revenue = data2.units_sold * price;
        try {
            // 首先检查两条数据是否关于同一种书籍
            if (data1.bookNo != data2.bookNo) {
                // 抛出异常，又后续的catch捕捉
                throw runtime_error("Data must refer to same ISBN");
            }
            // 程序执行到这里说明两条数据是关于同一本书籍的
            unsigned totalCount = data1.units_sold + data2.units_sold;
            double totalRevenue = data1.revenue + data2.revenue;
            cout << "ISBN:" << data1.bookNo << "\n"
                 << "销售量：" << totalCount << "\n"
                 << "销售额：" << totalRevenue << endl;
            if (totalCount == 0) {
                cout << "0 salses!" << endl;
            } else {
                // 计算平均价格
                cout << "average price: " << totalRevenue / totalCount << endl;
            }
            return 0; // 成功
        } catch (runtime_error err) {
            // 提醒用户两个说明必须相同，询问是否重新输入
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n') {
                break; // 跳出while循环
            }
        }
    }

    /*try语句块对应一一个 catch子句,该子句负责处理类型为runtime_ error 的异常。
    如果try语句块的代码抛出了runtime_ error 异常，接下来执行catch块内的语句。
    在我们书写的catch子句中，输出- -段提示信息要求用户指定程序是否继续。如果用户
    输入'n’，执行break语句并退出while循环;否则，直接执行while循环的右侧花
    括号，意味着程序控制权跳回到while条件部分准备下一次迭代。
    给用户的提示信息中输出了err.what() 的返回值。我们知道err 的类型是
    runtime_ error, 因此能推断what是runtime error类的一个成员函数。每个标准库异常类都定义了名为what的成员函数，这些函数没有参数，
    返回值是C风格字符串(即const char*)。 其中，runtime_ error 的what成员返.
    回的是初始化一个具体对象时所用的string对象的副本。如果上一节编写的代码抛出异
    常，则本节的catch子句输出
        Data must refer to same ISBN
        Try Again? Enter y or n
     */

    // 函数在寻找处理代码的过程中退出
    // 多个函数嵌套的try语句块中，若里层函数内有异常抛出，程序会不点向外搜索与之匹配的catch子句
    // 若每个函数没有搜索到与之匹配的catch子句就会被终止，沿着程序的执行路径逐层回退，直到找到适当类型的catch子句为止
    // 若最终仍没有匹配的catch子句，程序会转到名为 terminate的标准库函数，该函数行为与系统有关，一般情况下
    // 执行该函数会导致程序非正常退出
    // 没有任何try定义的异常，也会按照类似的方式处理
}
