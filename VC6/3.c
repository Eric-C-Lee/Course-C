#include <stdio.h>

int main()
{
    int num, reversed_num = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    while(num != 0)
    {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    printf("该整数的逆序数为%d。\n", reversed_num);
    return 0;
}
