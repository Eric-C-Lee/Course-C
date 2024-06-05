//
//  main.c
//  VC3
//
//  Created by Eric on 2022/3/23.
//

#include <stdio.h>

int main()
{
    int result = -1 + 2.5 * 3 + 'a';
    printf("result = %d\n", result);//运算顺序：先乘法，再加法，再加上字符'a'的ASCII码值。结果类型为int。
    return 0;
}

