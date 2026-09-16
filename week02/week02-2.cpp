///week02-2 used Namespace
///copy 01
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{/// no need for std::
    cout << "請輸入你的名字: ";
    string name;
    cin >> name;
    cout << name << "你好, 你會用字串了";
}
