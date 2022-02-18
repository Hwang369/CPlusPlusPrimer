/**
 * File:1_9
 * Author:AloProud
 * Data: 2022年02月18日周五 20:26:40
 * Description:
 *   使用while循环将50到100的整数相加。
 */
#include <iostream>
int main(void)
{
    int sum = 0, val = 50;
    while (val < 100)
    {
        sum += val;
        // val += 1; 原始答案
        val++;
    }
    std::cout << "sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}