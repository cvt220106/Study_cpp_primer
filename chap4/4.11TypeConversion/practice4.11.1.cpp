//
// Created by jacky on 2022/11/19.
//
#include <iostream>

using namespace std;

int main() {
    // 4.34 说出下面语句的类型转换
    // if(fval) fval若为0则转为false，反之则为true
    // dval = fval + ival  ival先由int转为float，和fval相加后的结果再转为double
    // dval + ival * cval cval由ichar转为int值和ival相乘后结果转为double

    // 4.35 指出表达式中的隐式类型转换
    char cval; int ival; unsigned int ui;
    float fval; double dval;

    cval = 'a' + 3; // ‘a'先转为int型字面值，和3相加后int型再转为char型赋值给cval
    fval = ui - ival * 1.0; // ui，ival转为double类型，进行运算后double型转为float
    dval = ui * fval;   // ui,fval都转为double类型？
    cval = ival + fval + dval; // ival和fval转为double类型，加和后double类型强转为char
}
