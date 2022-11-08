//
// Created by jacky on 2022/11/8.
//

#include <iostream>
#include <string>
#include "MySales_data.h"

using namespace std;

int main() {
    MySales_data data1, data2;
    double price = 0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    // check isbn if true add，else error
    if (data1.bookNo == data2.bookNo) {
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
    } else {
        cout << "ISBN not equal! 不是一本书，无法相加！" << endl;
        return -1; //失败
    }
}
