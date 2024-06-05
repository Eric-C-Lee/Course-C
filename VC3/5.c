//
//  5.c
//  VC3
//
//  Created by Eric on 2022/3/23.
//

#include <stdio.h>
int main()
{
    int a, b, c, count = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a % 2 == 0) count++;
    if (b % 2 == 0) count++;
    if (c % 2 == 0) count++;
    printf("偶数的个数为%d\n", count);
    return 0;
}
