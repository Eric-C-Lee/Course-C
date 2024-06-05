#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("该整数各位数字之和为%d。\n", sum);
    return 0;
}
