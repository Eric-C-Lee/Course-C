//
//  9.c
//  
//  输入一个3位的整数，拆分成个、十、百位
//  Created by Eric on 2022/4/4.
//

#include <stdio.h>
int main() {
    int num, digit_1, digit_2, digit_3;

    printf("请输入一个3位整数：");
    scanf("%d", &num);

    digit_1 = num % 10; // 个位
    digit_2 = (num / 10) % 10; // 十位
    digit_3 = num / 100; // 百位

    printf("百位：%d，十位：%d，个位：%d\n", digit_3, digit_2, digit_1);
    
    return 0;
}
