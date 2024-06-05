//
//  10.c
//  
//  求一个三位整数的逆序数。（例如：123-->321）
//  Created by Eric on 2022/4/4.
//

#include <stdio.h>
int main() {
    int num, digit_1, digit_2, digit_3, reverse_num;

    printf("请输入一个3位整数：");
    scanf("%d", &num);

    digit_1 = num % 10; // 个位
    digit_2 = (num / 10) % 10; // 十位
    digit_3 = num / 100; // 百位

    reverse_num = digit_1 * 100 + digit_2 * 10 + digit_3; // 逆序数

    printf("该数的逆序数为：%d\n", reverse_num);

    return 0;
}
