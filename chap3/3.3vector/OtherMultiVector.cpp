//
// Created by jacky on 2022/11/9.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 对于vector而言，与string相同，也有以下性质
    // empty判空
    // size获取vector对象内的元素个数
    // 通过【下标】获取对应位置上的元素
    // 通过 = 执行拷贝操作，=右值可以vector对象也可以是列表
    // == ！=进行比较，只有长度相等，且对应位置上的元素值也相同时才相同
    // > < >= <=，大小比较，与string比较规则相同。
    // 前提是vector内的元素可以比较！
    vector<int> v1;
    cout << v1.empty() << endl; // 1 true
    cout << v1.size() << endl; // 空的，0
    // 要注意的时这里的size返回的类型为vector<T>::size_type

    vector<int> v2 {11, 22, 33, 44};
    vector<int> v3 {22};
    cout << (v2 > v3) << endl; // 0 false

    // 通过范围for获取vector值与修改vector元素值
    for (auto &value : v2) {
        value *= value; //实现元素的平方
    }
    for (auto value : v2) {
        cout << value << " ";
    }
    cout << endl;

    // 通过下标对vector对象内元素进行索引
    // 将输入成绩进行分类保存,不及格《60，及格，【60，70），中等，【70，80），良好，【80，90），优秀【90，100】
    unsigned grade;
    vector<unsigned> scores(5, 0);
    while (cin >> grade) {
        // 以99999作为终结符
        if (grade == 99999) {
            break;
        }
        if (grade > 0 && grade <= 100) {
            // 过滤无效成绩
            if (grade < 60) {
                ++scores[0];

            } else if (grade == 100) {
                ++scores[4];
            } else {
                ++scores[(grade - 60) / 10 + 1];
            }
        }
    }
    for (auto value : scores) {
        cout << value << " ";
    }
    cout << endl;

    // 不可以用vector的下标形式来进行元素的添加
    // 错误代码
//    vector<int> ivec;
//    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix) {
//        ivec[ix] = ix;
//    }
    // 错误的点在于ivec本质是一个空的vector，并不能通过下标取获取并修改其元素值
    /**
     * 对于string与vector十分容易出错的点就是，使用了非法下标去访问元素
     * 我们在使用下标访问时，要确定好是已存在的元素
     * 这种错误并不会被编译器所感知！
     * 确保下标合法的最好方法就是使用范围for去访问元素，避开下标操作
     */
}

