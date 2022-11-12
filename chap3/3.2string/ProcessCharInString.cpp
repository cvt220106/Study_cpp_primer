//
// Created by jacky on 2022/11/8.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    // 通过范围for来遍历str，逐个判别每个字符类型并统计
    int isalnum_cnt = 0, isalpha_cnt = 0, iscntrl_cnt = 0, isdigit_cnt = 0, isgraph_cnt = 0;
    int islower_cnt = 0, isprint_cnt = 0, ispunct_cnt = 0, isspace_cnt = 0, isupper_cnt = 0, isxdigit_cnt = 0;
    for (auto c : str) {
        if (isalnum(c)) {
            // 当c是字母或数字时为真
            isalnum_cnt++;
        }
        if (isalpha(c)) {
            // 当c是字母时为真
            isalpha_cnt++;
        }
        if (iscntrl(c)) {
            // 当c是控制字符为真
            iscntrl_cnt++;
        }
        if (isdigit(c)) {
            // 当c是数字时为真
            isdigit_cnt++;
        }
        if (isgraph(c)) {
            // 当c是不是空格但可打印时为真
            isgraph_cnt++;
        }
        if (islower(c)) {
            // 当c是小写字母为真
            islower_cnt++;
        }
        if (isprint(c)) {
            // 当c是k可打印字符（空格或可视字符）为真
            isprint_cnt++;
        }
        if (ispunct(c)) {
            // 当c是标点符号（非控制字符、数字、字母、可打印空白）为真
            ispunct_cnt++;
        }
        if (isspace(c)) {
            // 当c是空白（c是空格，制表符，回车符，换行符，进纸符）为真
            isspace_cnt++;
        }
        if (isupper(c)) {
            // 当c是大写字母为真
            isupper_cnt++;
        }
        if (isxdigit(c)) {
            // 当c是16进制数字为真
            isxdigit_cnt++;
        }
    }
    cout << "isalnum_cnt = " << isalnum_cnt << "\n" << "isalpha_cnt = " << isalpha_cnt << "\n" << "iscntrl_cnt = "
         << iscntrl_cnt << "\n"
         << "isdigit_cnt = " << isdigit_cnt << "\n" << "isgraph_cnt = " << isgraph_cnt << "\n" << "islower_cnt = "
         << islower_cnt << "\n"
         << "isprint_cnt = " << isprint_cnt << "\n" << "ispunct_cnt = " << ispunct_cnt << "\n" << "isspace_cnt = "
         << isspace_cnt << "\n"
         << "isupper_cnt = " << isupper_cnt << "\n" << "isxdigit_cnt = " << isxdigit_cnt << endl;


    cout << "\n---------------------------\n" << endl;

    // 边范围for遍历边处理字符，通过for(auto &c : str)，引用来实现
    string s1 = "Hello World";
    cout << s1 << endl;
    for (auto &c : s1) {
        c = toupper(c);
    }
    cout << s1 << endl;

    cout << "\n---------------------------\n" << endl;

    // 使用下标访问string对象中的单个字符，下标取值范围为[0，string.size()-1]
    // 使用下标访问字符前，最好先判定string.empty()，不为空时再使用
    // 使用下标访问第一个字符，并将该字符更改为大写字符
    string s2 = "some string";
    cout << s2 << endl;
    if (!s2.empty()) {
        s2[0] = toupper(s2[0]); // 不为空时才处理
    }
    cout << s2 << endl;

    cout << "\n---------------------------\n" << endl;

    // 使用下标值对string对象进行迭代访问处理
    string s3 = "some string";
    cout << s3 << endl;
    for (decltype(s3.size()) index = 0; index != s3.size() && !isspace(s3[index]); ++index) {
        s3[index] = toupper(s3[index]);
    }
    cout << s3 << endl;

    // 通过输入下标值进行随机访问
    const string HexDict = "0123456789ABCDEF";
    string res;
    string::size_type n;
    while (cin >> n) {
        // Clion输入EOF存在bug，此处使用999来作为终结符
        if (n == 999) {
            break;;
        }
        if (n < HexDict.size()) {
            res += HexDict[n];
        }
    }
    cout << res << endl;
}