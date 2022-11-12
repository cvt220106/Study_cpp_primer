//
// Created by jacky on 2022/11/9.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // 3.14,cin>>读入一组整数存入一个vector对象
    vector<int> v1;
    int value;
    while (cin >> value) {
        // 默认99999为终止符
        if (value == 99999) {
            break;
        }
        v1.push_back(value);
    }
    for (auto value : v1) {
        cout << value << " ";
    }
    cout << endl;

    // 3.15同上，int变为string
    vector<string> v2;
    string line;
    while (getline(cin, line)) {
        // 默认”0000“作为终止符
        if (line == "0000") {
            break;
        }
        v2.push_back(line);
    }
    for (auto value : v2) {
        cout << value << endl;
    }
}