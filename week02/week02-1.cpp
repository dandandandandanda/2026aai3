///week02-1
#include <iostream>
#include <stdio.h>
///大一C 用char[100] 宣告麻煩
/// scanf("%s", name) 一樣麻煩

int main()
{
    std::cout << "請輸入你的名字: ";
    std::string name;
    std::cin >> name;
    std::cout << name << "你好, 你會用字串了";
}
