#include <stdio.h>

int main()
{
    int sum = 0, i, j, factorial = 1;
    
    for (i = 1; i <= 10; i++) {
        // 计算i的阶乘
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += factorial;
        factorial = 1;  // 重置阶乘变量
    }
    
    printf("1!+2!+3!+...+10!=%d\n", sum);
    
    return 0;
}
