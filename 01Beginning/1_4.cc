/*
File:1_4
Author:AloProud
Data: 2022年02月16日周三 22:29:35
Description:我们的程序使用加法运算符+来将两个数相加。
            编写程序使用乘法运算符*，来打印两个数的积
*/
#include <iostream>
using namespace std;
int main(void)
{
    std::cout << "请输入两个数" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << v1 << "和" << v2 << "的积为" << v1 * v2 << std::endl;
    return 0;
}
