//
//  3.c
//  VC3
//
//  Created by Eric on 2022/3/23.
//

#include <stdio.h>
int main()
{
    int a, b;
    a = (b = 2) + 3;
    printf("a = %d, b = %d\n", a, b);
    return 0;
    //运算顺序：先赋值b=2，再加3，最后赋值给a。整个表达式的结果为5，a的值为5，b的值为2。
}
