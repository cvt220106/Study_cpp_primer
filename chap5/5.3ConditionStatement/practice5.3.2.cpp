//
// Created by jacky on 2022/11/20.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    // 5.9 使用if来统计字符串中的元音字母
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    string str = "hello world, abcdefg ooooo, hi";
    for (auto ch : str) {
        if (ch == 'a') {
            ++aCnt;
        }
        if (ch == 'e') {
            ++eCnt;
        }
        if (ch == 'i') {
            ++iCnt;
        }
        if (ch == 'o') {
            ++oCnt;
        }
        if (ch == 'u') {
            ++uCnt;
        }
    }
    cout << "Number of vowel a: " << aCnt << "\n"
         << "Number of vowel e: " << eCnt << "\n"
         << "Number of vowel i: " << iCnt << "\n"
         << "Number of vowel o: " << oCnt << "\n"
         << "Number of vowel u: " << uCnt << endl;

    cout << "-----------------------------------------" << endl;

    // 5.10 统计元音字母时，未统计大写的元音字母，改写加上大写字母的统计
    aCnt = 0; eCnt = 0; iCnt = 0; oCnt = 0; uCnt = 0; // reset
    string str2 = "hello world a A eE iI oO uU";
    for (auto ch : str2) {
        switch (ch) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
        }
    }
    cout << "Number of vowel a: " << aCnt << "\n"
         << "Number of vowel e: " << eCnt << "\n"
         << "Number of vowel i: " << iCnt << "\n"
         << "Number of vowel o: " << oCnt << "\n"
         << "Number of vowel u: " << uCnt << endl;

    cout << "-----------------------------------------" << endl;

    // 5.11 修改统计元音字母的程序，使其统计空格，制表符和换行符
    unsigned sCnt = 0, tCnt = 0, nCnt = 0;
    string str3 = "hel llo\t wo\n rld\t ni\n hao\t";
    for (auto ch : str3) {
        switch (ch) {
            case ' ':
                ++sCnt;
                break;
            case '\t':
                ++tCnt;
                break;
            case '\n':
                ++nCnt;
                break;
        }
    }
    cout << "Number of space: " << sCnt << "\n"
         << "Number of \\t: " << tCnt << "\n"
         << "Number of \\n: " << nCnt << endl;

    cout << "-----------------------------------------" << endl;

    // 5.12 统计含有两个字符的字符序列的数量:ff,fl,fi
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    string str4 = "abcdffiflfflffi";
    auto len = str4.size();
    for (decltype(len) i = 0; i != len - 1; ++i) {
        switch (str4[i]) {
            case 'f':
                switch (str4[i+1]) {
                    case 'f':
                        ++ffCnt;
                        break;
                    case 'l':
                        ++flCnt;
                        break;
                    case 'i':
                        ++fiCnt;
                        break;
                }
                break;
        }
    }
    cout << "number of ff: " << ffCnt << '\n'
         << "number of fl: " << flCnt << '\n'
         << "number of fi: " << fiCnt << endl;

    // 5.13 指出编程错误，并且修正
    /**
     * (a)
     * unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
     * char ch = next_text();
     * switch (ch) {
     *      case 'a': aCnt++;
     *      case 'e': eCnt++;
     *      default: iouCnt++;
     * }
     * 错误点,每个case标签语句运行结束到达下一个标签前漏写break，导致会顺序继续执行后续的标签中的语句
     * switch (ch) {
     *      case 'a': aCnt++; break;
     *      case 'e': eCnt++; break;
     *      default: iouCnt++; break;
     * }
     *
     * (b)
     * unsigned index = some_value();
     * switch (index) {
     *      case 1:
     *          int ix = get_value();
     *          ivec[ix] = index;
     *          break;
     *      default:
     *          ix = ivec.size() - 1;
     *          ivec[ix] = index;
     * }
     * 错误点：如果case 1标签没有匹配到时，default中使用的变量ix的初始化就会被跳过，程序不合法！
     * 修改：将ix的初始化与定义放在块中，这样在case未匹配时，ix被使用便会提示：不会再作用域内
     * switch (index) {
     *      case 1:{
     *          int ix = get_value();
     *          ivec[ix] = index;
     *          break;
     *      }
     *      default:{
     *          int ix = ivec.size() - 1;
     *          ivec[ix] = index;
     *      }
     * }
     *
     * (c)
     * unsigned evenCnt = 0, oddCnt = 0;
     * int digit = get_num() % 10;
     * switch (digit) {
     *      case 1, 3, 5, 7, 9:
     *          oddCnt++;
     *          break;
     *      case 2, 4, 6, 8, 10:
     *          evenCnt++;
     *          break;
     * }
     * 错误点：多个case标签对应同一个语句操作时的语法错误，
     * 修改为
     * switch (digit) {
     *      case 1: case 3: case 5: case 7: case 9:
     *          oddCnt++;
     *          break;
     *      case 2: case 4: case 6: case 8: case 10:
     *          evenCnt++;
     *          break;
     * }
     *
     * (d)
     * unsigned ival = 512, jval = 1024, kval = 4096;
     * unsigned bufsize;
     * unsigned swt = get_bufCnt();
     * switch(swt) {
     *      case ival:
     *          bufsize = ival * sizeof(int);
     *          break;
     *      case jval:
     *          bufsize = jval * sizeof(int);
     *          break;
     *      case kval:
     *          bufsize = kval * sizeof(int);
     *          break;
     * }
     * 错误点：case标签必须时常量表达式constexpr,而ival，jval，kval类型并不是
     * 修改：
     * constexpr unsigned ival = 512, jval = 1024, kval = 4096;
     * unsigned bufsize;
     * unsigned swt = get_bufCnt();
     * switch(swt) {
     *      case ival:
     *          bufsize = ival * sizeof(int);
     *          break;
     *      case jval:
     *          bufsize = jval * sizeof(int);
     *          break;
     *      case kval:
     *          bufsize = kval * sizeof(int);
     *          break;
     * }
     */
}
