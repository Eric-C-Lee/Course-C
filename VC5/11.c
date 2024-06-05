//
//  main.c
//  VC5
//11、输入一个由两个数据和一个算术运算符组成的表达式，根据运算符完成相应的运算，并将结果输出。
//  Created by Eric on 2022/4/11.
//

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;
    printf("请输入两个数和一个算术运算符（例如：3 + 5）：");
    scanf("%f %c %f", &num1, &operator, &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("除数不能为0！");
                return 0;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("输入的算术运算符有误！");
            return 0;
    }
    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
    return 0;
}
