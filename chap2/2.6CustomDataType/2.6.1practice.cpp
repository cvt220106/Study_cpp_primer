//
// Created by jacky on 2022/11/8.
//
#include <iostream>

struct Foo{}
// 类定义结构体不加分号时的报错信息
//        F:\cpp_code\c++_primer_study\char2\2.6CustomDataType\2.6.1practice.cpp:6:13: error: expected ';' after struct definition
//struct Foo{}
//^
//;
//mingw32-make.exe[3]: *** [CMakeFiles\2.6.1.dir\build.make:81: CMakeFiles/2.6.1.dir/2.6CustomDataType/2.6.1practice.cpp.obj] Error 1
//mingw32-make.exe[2]: *** [CMakeFiles\Makefile2:442: CMakeFiles/2.6.1.dir/all] Error 2
//mingw32-make.exe[1]: *** [CMakeFiles\Makefile2:449: CMakeFiles/2.6.1.dir/rule] Error 2
//mingw32-make.exe: *** [Makefile:292: 2.6.1] Error 2
int main() {
    return 0;
}