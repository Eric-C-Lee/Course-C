#include <stdio.h>

int main()
{
    int num, reversed_num = 0, temp;
    printf("请输入一个整数：");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        reversed_num = reversed_num * 10 + temp % 10;
        temp /= 10;
    }
    if(num == reversed_num)
    {
        printf("%d是回文数。\n", num);
    }
    else
    {
        printf("%d不是回文数。\n", num);
    }
    return 0;
}
