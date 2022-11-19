//
// Created by jacky on 2022/11/15.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 4.17 说明前置后置递增运算符的区别
    // 前置递增符，将运算对象递增后返回的就是递增后的值
    // 后置递增符，将运算对象递增后返回的是递增前的值

    // 4.18 将study中while循环中后置运算符换位前置运算符
    vector<int> v {0, 1, 2, 3, 4};
    auto pbeg = v.begin();
    // 使用while输出vector中所有元素
    while (pbeg != v.end()) {
        cout << *++pbeg << endl; // 输出当前值的下一个对象的值
        // 因为是前置的递增，递增后返回的就是递增后的值，因此解引用的也是递增后的值
        // 因此该程序第一个0就会没法输出，并且还会解引用v.end（），使程序出错
    }

    // 4.19 ptr指向int的指针，vec的类型是vector<int>, ival的类型使int
    // 表达式合法性判别，不正确的就行修改
    /**
     * (a) ptr != 0 && *ptr++
     * 先判别ptr不为nullptr，再去判别ptr当前所指值，将其转为bool，同时ptr向前移动一个元素
     * (b) ival++ && ival
     * 先判别ival当前值是否不为0，同时将ival+1，在判别加1后的ival是否不为0
     * (c) vec[ival++] <= vec[ival]
     * 比较vec前后两个元素大小关系是否满足<=
     */

    int ival = 0;
     int *ptr = &ival;
     if (ptr != 0 && *ptr++) {
         cout << *ptr << endl;
     } else {
         // ival为0 ，ptr一开始指向的是0，因此*ptr++返回的是0转为bool即为false，因此条件判断最终为假
         cout << "else---" << *ptr << endl;
     }

     ival = -1;
     if (ival++ && ival) {
         // 分别判别ival于ival+1是否不为0
         cout << ival << endl;
     } else {
         cout << "else---" << ival << endl;
     }

     vector<int> vec {0, 1, 2, 3, 4};
     // 此时ival=0，因此判别的是vec[0]和vec[1]
     if (vec[ival++] <= vec[ival]) {
         cout << vec[ival] << endl; // 1
     }
}
