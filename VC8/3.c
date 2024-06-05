#include <stdio.h>

// 求两个数中的较小值
int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int a, b, c, d;
    printf("请输入4个整数：\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int minVal = min(min(min(a, b), c), d);
    printf("4个数中的最小值为：%d\n", minVal);
    return 0;
}
