//
// Created by jacky on 2022/11/24.
//
#include <iostream>
#include <exception>
#include <stdexcept>
#include <new>
#include <typeinfo>

/**
* exception头文件定义了最通用的异常类exception，只报告异常的发生，不提供任何额外信息
* new头文件定义了bad_alloc异常类型，后续会介绍
* typeinfo头文件定义了bad_cast异常类型，同样后续介绍
 * 这三种异常类型只能以默认初始化的方式创建，不允许为这些对象 提供初始值
*/

/**
* stdexcept头文件定义了几种常用的异常类
 * exception        最常见的问题
 * runtime_error    只有在程序运行时才能检测出的问题
 * range_error      运行时错误；生成的结果超出了有意义的值域范围
 * overflow_error   运行时错误；计算上溢
 * underflow_error  运行时错误；计算下溢
 * logic_error      程序逻辑错误
 * domain_error     逻辑错误；参数对应的结果值不存在
 * invalid_argument 逻辑错误；无效参数
 * length_error     逻辑错误；试图创建一个超出该类型最大长度的对象
 * out_of_range     逻辑错误；使用一个超出有效范围的值
 *
 * 标准库异常类定义了几种运算，包括创建或拷贝异常类型的对象，以及为异常类型的对象赋值
 * 对于这些异常对象，必须使用string对象或C风格字符串初始化，不允许使用默认初始化
 * 创建这些对象时，必须提供初始值，初始值含有错误相关的信息
 *
 * 异常类型定义了一个名为what的成员函数，函数没有任何参数
 * 返回值是一个指向C风格字符串的const char*,该字符串的目的是提供关于异常的一些文本信息
 *
 * 对于有初始值的异常类型，返回对应的字符串
 * 无初始值的类型，what返回内容由编译器决定
*/