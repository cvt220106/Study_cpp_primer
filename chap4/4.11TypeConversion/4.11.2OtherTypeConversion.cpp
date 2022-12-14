//
// Created by jacky on 2022/11/19.
//
/**
 * 1. 数组转换为指针
 * 大多数数组表达式中，数组名自动转换成指向数组首元素的指针
 * 当数组被当作decltype, &,sizeof, typeid等运算符的运算对象或参数时，不会发生转换
 * 如果使用一个引用来初始化数组，上述转换也不会发生
 * // 或许在函数中，使用函数类型在表达式中也会发生类似指针转换
 *
 * 2. 指针的转换
 * 常量整数值0或者nullptr可以转换为任意指针类型，指向任意非常量的指针能转换成void*
 * 指向任意对象的指针能转换成const void*
 *
 * 3. 转换成布尔类型
 * 存在从算术类型或指针类型转为布尔类型自动转换机制
 * 若指针或算术类型值为0转为false，反之为true
 *
 * 4. 转换成常量
 * 允许将指向非常量的指针转换为指向相应常量类型的指针
 *
 * 5. 类类型定义的转换
 */
