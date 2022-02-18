/**
 * File:unknownNumberInputs
 * Author:AloProud
 * Data: 2022年02月18日周五 20:42:01
 * Description:
 * 读取数量不定的输入数据
 */
#include <iostream>
int main(void)
{
    int sum = 0, value = 0;
    //读取数据直到遇到文件尾，计算所有读入的值的和。
    while (std::cin >> value)
        sum += value; //等价与sum=sum+value
    std::cout << "Sum is:" << sum << std::endl;
    return 0;
}
// while循环会一直执行直至遇到文件结束符
//【Windows系统中，输入文件结束符的方法是敲Ctrl+Z->enter键】
//【Mac OS X系统中，Ctrl+D】
//（或输入错误）