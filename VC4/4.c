//
//  4.c
//  输入一个双精度数，输出时小数部分保留3位
//
//  Created by Eric on 2022/4/1.
//

#include <stdio.h>

int main() {
    double num;
    printf("请输入一个双精度数：");
    scanf("%lf", &num);

    printf("输出时小数部分保留3位为：%.3lf\n", num);
    return 0;
}
