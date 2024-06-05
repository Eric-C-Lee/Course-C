#include <stdio.h>
#include <math.h>

// 判断一个整数是否为水仙花数
int flower(int n)
{
    int digitCount = 0, tmp = n, sum = 0;

    // 统计数字位数
    while (tmp > 0)
    {
        digitCount++;
        tmp /= 10;
    }

    tmp = n;
    while (tmp > 0)
    {
        int digit = tmp % 10;
        sum += pow(digit, digitCount);
        tmp /= 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("请输入一个整数：\n");
    scanf("%d", &n);
    if (flower(n))
        printf("%d是水仙花数\n", n);
    else
        printf("%d不是水仙花数\n", n);
    return 0;
}
