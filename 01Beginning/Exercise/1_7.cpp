/**
 * File:1_7
 * Author:AloProud
 * Data: 2022年02月18日周五 11:13:42
 * Description:
 *   编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。
 */
#include <iostream>
using namespace std;
/**
 * 注释对不能嵌套
 * "不能嵌套"几个字会被认为是源码，
 * 像剩余程序一样处理
 */
int main(void)
{
    std::cout << /*" */ "/*" /*"*/;
    //表达混乱，尽量不要这样。
    return 0;
}