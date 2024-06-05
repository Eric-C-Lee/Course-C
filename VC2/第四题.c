//
//  4、已知某字符为‘A’，求该字符的前一个字符和后一个字符。
//  VC2
//
//  Created on 2022/3/17.
//

#include <stdio.h>

int main()
{
    char c = 'A'; // 声明字符变量c并赋值为'A'
    printf("该字符的前一个字符为%c，后一个字符为%c\n", c-1, c+1);//@
    return 0;
}
