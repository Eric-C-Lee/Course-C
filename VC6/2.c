#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    printf("该整数是%d位数。\n", count);
    return 0;
}
