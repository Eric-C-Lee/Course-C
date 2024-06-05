//
//  4.c
//  VC3
//
//  Created by Eric on 2022/3/23.
//

#include <stdio.h>
int main()
{
    int i = 1, j = 2, k;
    k = i++ + (++j);
    printf("i = %d, j = %d, k = %d\n", i, j, k);
    return 0;
}

//运算顺序：先计算++j，再计算i++，最后加起来赋值给k。i的值为2，j的值为3，k的值为5。
