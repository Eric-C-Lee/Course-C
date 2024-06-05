//
//  已知一个整数,判断该数是否是偶数。
//  VC2
//
//  Created on 2022/3/17.
//
#include <stdio.h>
int main()
{
    int num = 21; 
    if(num % 2 == 0) // 判断是否为偶数
    {
        printf("%d是偶数\n", num);
    }
    else
    {
        printf("%d不是偶数\n", num);
    }
    return 0;
}
