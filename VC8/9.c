#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    
    printf("请输入一个整数：");
    scanf("%d", &n);
    
    printf("%d的阶乘是%d。\n", n, factorial(n));
    
    return 0;
}

int factorial(int n)
{
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
