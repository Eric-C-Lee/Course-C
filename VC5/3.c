//
//  main.c
//  VC5
//3、求两个数的较大值。(用if语句)
//  Created by Eric on 2022/4/9.
//

#include <stdio.h>

int main() {
    int a, b, max;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    printf("这两个数中的最大值是%d\n", max);
    return 0;
}
