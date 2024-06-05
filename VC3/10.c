//
//  10.c
//  VC3
//
//  Created by Eric on 2022/3/23.
//

#include <stdio.h>
int main()
{
    int a = 3;
    a += a -= a * a;
    printf("a = %d\n", a);
    return 0;
}
