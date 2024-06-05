//
//  7.c
//  
// 输入三个数，求其平均值，最大值，最小值
//  Created by Eric on 2022/4/4.
//

#include <stdio.h>

int main() {
    double num1, num2, num3;
    double avg_value, max_value, min_value;
    printf("请输入三个数：");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    //求平均值
    avg_value = (num1 + num2 + num3) / 3;
    printf("平均值为：%lf\n", avg_value);

    //求最大值
    max_value = (num1 > num2) ? num1 : num2;
    max_value = (max_value > num3) ? max_value : num3;
    printf("最大值为：%lf\n", max_value);

    //求最小值
    min_value = (num1 < num2) ? num1 : num2;
    min_value = (min_value < num3) ? min_value : num3;
    printf("最小值为：%lf\n", min_value);

    return 0;
}
