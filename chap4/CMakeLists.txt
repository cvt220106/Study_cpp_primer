cmake_minimum_required(VERSION 3.19)
project(chap4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

add_executable(4.2 4.2ArithmeticOperators/study.cpp)
add_executable(practice4.2 4.2ArithmeticOperators/practice4.2.cpp)
add_executable(4.3 4.3LogicalAndRelationalOperator/study.cpp)
add_executable(practice4.3 4.3LogicalAndRelationalOperator/practice4.3.cpp)
add_executable(4.4 4.4AssignmentOperator/study.cpp)
add_executable(practice4.4 4.4AssignmentOperator/practice4.4.cpp)
add_executable(4.5 4.5InceAndDecOperators/study.cpp)
add_executable(practice4.5 4.5InceAndDecOperators/practice4.5.cpp)
add_executable(4.6 4.6MemberAccessOperator/study.cpp)
add_executable(practice4.6 4.6MemberAccessOperator/practice4.6.cpp)
add_executable(4.7 4.7ConditionOperator/study.cpp)
add_executable(practice4.7 4.7ConditionOperator/practice4.7.cpp)
add_executable(4.8 4.8BitOperator/study.cpp)
add_executable(practice4.8 4.8BitOperator/practice4.8.cpp)
add_executable(4.9 4.9sizeofOperator/study.cpp)
add_executable(practice4.9 4.9sizeofOperator/practice4.9.cpp)
add_executable(4.10 4.10CommaOperator/study.cpp)
add_executable(practice4.10 4.10CommaOperator/practice4.10.cpp)
add_executable(4.11.1 4.11TypeConversion/4.11.1ArithmeticConversion.cpp 4.11TypeConversion/4.11.2OtherTypeConversion.cpp)
add_executable(practice4.11.1 4.11TypeConversion/practice4.11.1.cpp)
add_executable(practice4.11.3 4.11TypeConversion/practice4.11.3.cpp)
add_executable(4.11.3 4.11TypeConversion/4.11.3ExplicitConversion.cpp)