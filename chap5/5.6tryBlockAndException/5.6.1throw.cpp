//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <stdexcept>

using namespace std;

struct MySales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


int main() {
    // 程序的异常检测部分使用throw表达式引发一个异常，throw表达式包含关键字throw
    // 和紧随其后的一个表达式
    // 其中表达式的类型就是抛出的异常类型
    // throw表达式后通常紧跟一个分号，从而构成一条表达式语句

    // 改写前面的自定义商品类型的相加程序
    // 如果书名不同，则抛出异常
    MySales_data data1, data2;
    double price = 0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    // 首先检查两条数据是否关于同一种书籍
    if (data1.bookNo != data2.bookNo) {
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

    // 通过runtime_error类型的异常，并且提供其一个字符串，输出一些关于异常的辅助信息
}