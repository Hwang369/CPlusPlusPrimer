/**
 * File:while_sum
 * Author:AloProud
 * Data: 2022年02月18日周五 20:18:43
 * Description:
 *   while语句，求1到10这个10个数之和
 */
#include <iostream>
int main(void)
{
    int sum = 0, val = 1;
    while (val <= 10)
    {
        while (val <= 10)
        {
            sum += val;
            ++val;
        }
        std::cout << "Sum of 1 to 10 inclusive is "
                  << sum << std::endl;
    }

    return 0;
}