//
//  11.c
//  编写程序交换两个变量的值
//
//  Created by Eric on 2022/4/4.
//

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("请输入两个数（空格隔开）：");
    scanf("%d %d", &a, &b);

    temp = a; // 交换值的过程
    a = b;
    b = temp;

    printf("交换后，a = %d，b = %d\n", a, b);

    return 0;
}
