//
//  12.c
//  VC3
//
//  Created by Eric on 2022/3/23.
//

#include <stdio.h>
int main()
{
    int a, b, max;
    scanf("%d%d", &a, &b);
    max = a > b ? a : b;
    printf("较大值为%d\n", max);
    return 0;
}
