//
//  main.c
//  VC5
//1、求一个数的绝对值。(用if语句)
//  Created by Eric on 2022/4/9.
//

#include <stdio.h>

int main() {
    int num, abs_num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    if (num >= 0) {
        abs_num = num;
    } else {
        abs_num = -num;
    }
    printf("这个数的绝对值是%d\n", abs_num);
    return 0;
}
