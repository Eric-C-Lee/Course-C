//
//  已知某字母为‘A’，求对应的小写字母。
//  VC2
//
//  Created on 2022/3/17.
//

#include <stdio.h>

int main()
{
    char c = 'A'; // 声明字符变量c并赋值为'A'
    printf("对应的小写字母为%c\n", c+32); // 大写字母和小写字母的ASCII码相差32
    return 0;
}
