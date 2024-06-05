//
//  5.c
//  输入一个3位整数，输出时占5位，不足部分用0填补
//
//  Created by Eric on 2022/4/1.
//

#include <stdio.h>

int main() {
    int num;
    printf("请输入一个3位整数：");
    scanf("%d", &num);

    printf("输出为：%05d\n", num);
    return 0;
}
