//
//  8.c
//  
// 求一元二次方程的实数根
//  Created by Eric on 2022/4/4.
//

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    printf("请输入一元二次方程 ax^2 + bx + c = 0 的三个系数（空格隔开）：");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) { // 如果一次项系数为0，则不是二次方程
        printf("输入错误！a不能为0\n");
    } else {
        delta = b * b - 4 * a * c; // 计算判别式
        if (delta > 0) { // 有两个不等实数根
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("该方程有两个不等实数根，分别为：%.2f和%.2f\n", x1, x2);
        } else if (delta == 0) { // 有两个相等实数根
            x1 = -b / (2 * a);
            printf("该方程有两个相等实数根，均为：%.2f\n", x1);
        } else { // 无实数根
            printf("该方程无实数根\n");
        }
    }

    return 0;
}
