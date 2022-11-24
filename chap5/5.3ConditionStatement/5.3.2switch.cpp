//
// Created by jacky on 2022/11/20.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    // switch语句
    // 提供了一条便利的途径使得能够在若干固定选项中做出选择
    //统计一段文字中的五个元音字母的出现次数
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    string str = "hello world, abcdefg ooooo, hi";
    for (auto ch : str) {
        switch (ch) {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
        }
    }
    cout << "Number of vowel a: " << aCnt << "\n"
         << "Number of vowel e: " << eCnt << "\n"
         << "Number of vowel i: " << iCnt << "\n"
         << "Number of vowel o: " << oCnt << "\n"
         << "Number of vowel u: " << uCnt << endl;

    // 整个上述程序的执行流程为：switch语句对括号内的表达式求值，该表达式紧跟在关键字switch的后面，可以是一个初始化的变量声明
    // 表达式的值会转换成整数类型，然后与后续的case标签的值进行比较
    // 如果表达式和某个case标签的值匹配成功，程序从该标签之后的第一条与开始执行，直到到达了switch的结尾或者遇到一条breadk语句为止
    // break的作用就是跳出当前控制流，在switch中，break会将程序控制转移至switch语句外
    // case关键字和其对应的值一起被称作case标签，case标签必须时常量表达式！
//    char ch; cin >> ch;
//    int ival = 42;
//    switch (ch) {
//        case 3.14: // 错误，case标签不是一个整数！
//        case ival: // 错误，case标签不是一个常量！
//    }
    // 并且switch中任意两个case标签蹦年相同，同时还有default作为一个特别case标签而存在

    // switch内部的控制流
    // 如果某个case标签匹配成功，将从该标签开始往后顺序执行所有case分支，除非遇到程序显式的break终端
    // 否则会一直执行到switch的结尾处才阶数
    // 因此为了对应执行每个case的行为，我们都会显示的在一个case标签的下一个case标签前加上break
    // 有时，我们也会有多个标签对应同一组操作执行，此时我们就可以故意省去这些需要同一操作的标签之间的break
    unsigned vowelCnt = 0;
    for (auto ch : str) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowelCnt;
                break;
        }
    }
    cout << vowelCnt << endl;

    // c++对于case标签换行形式比较自由，可以将多个case标签写于一行
    // 对应的上面程序可改写为：
    vowelCnt = 0; // reset
    for (auto ch : str) {
        switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            ++vowelCnt;
            break;
        }
    }
    cout << vowelCnt << endl;
    // 一般来说不要省略case分支最后的break语句，没有break时最好加上注释说明逻辑

    // 漏写break容易引发缺陷，导致预期之外的效果
    aCnt = 0; eCnt = 0; iCnt = 0; oCnt = 0; uCnt = 0; // reset
    for (auto ch : str) {
        switch (ch) {
            case 'a':
                ++aCnt;
            case 'e':
                ++eCnt;
            case 'i':
                ++iCnt;
            case 'o':
                ++oCnt;
            case 'u':
                ++uCnt;
        }
    }
    // 在这段程序中，假设ch的值为‘a’，则会导致后面5个++都执行，同理若为‘e’则执行其后4个++，依次类推
    // 导致程序的执行过程了，不断跨越了case标签的边界，执行了其他case标签对应的执行语句
    cout << "Number of vowel a: " << aCnt << "\n"
         << "Number of vowel e: " << eCnt << "\n"
         << "Number of vowel i: " << iCnt << "\n"
         << "Number of vowel o: " << oCnt << "\n"
         << "Number of vowel u: " << uCnt << endl;

    // default标签
    // 如果没有任何一个case标签能匹配上switch表达式的值，程序将执行紧跟在default标签后的语句
    // 刚才例子中，我们便可以在default中统计非元音字母的数量
    unsigned otherCnt = 0;
    vowelCnt = 0; // reset
    for (auto ch : str) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCnt;
                break;
            default:
                ++otherCnt;
                break;
        }
    }
    cout << str << endl;
    cout << vowelCnt << endl;
    cout << otherCnt << endl;
    // default标签不应该单独出现，后面必须跟上一条语句或另外的一个case标签
    // 若以default标签作为结尾，若为空，default标签后应该跟上一条空语句或一个空块

    // switch内部的变量定义
    // 由于switch的执行流程可能会跨过一些case标签，若程序跳转到一个特定的case，该case标签前的部分则会被忽略
    // 当忽略的语句中含有变量定义时，就会导致其他语句中的使用该变量非法！
//    bool flag = false;
//    switch (flag) {
//        case true:
//            // 因为程序可能执行跳过该标签，而忽略下面的初始化语句，因此该switch语句不合法
//            string file_name; // 错误，控制流绕过了一个隐式初始化的变量
//            int ival = 0; // 错误，控制流绕过了一个显示初始化的变量
//            int jval;   // 正确，因为jval没有初始化
//            break;
//        case false: // 报错，jump bypasses variable initialization,跳过了变量初始化语句！
//            // jval虽然在作用域内，但并未初始化，一次你此处可以给jval赋值
//            jval = 1;
//            if (file_name.empty()) {
//                ; // file_name虽然在作用域内，但实际使用时并没有被初始化，因此不合法！！
//            }
//            break;
//    }

    // 若某个case分支内需要定义并初始化一个变量，应该将变量定义与块内，这样便可确保后面的所有case标签都在变量的作用域外
//    case true: {
//        // 正确，声明语句位于语句块内部
//        string file_name = get_file_name();
//        // ...
//    }
//    case false:
//        if (file_name.empty()) // 错误，file_name不在作用域内
}
