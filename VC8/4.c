#include <stdio.h>

// 求x的n次方
double power(double x, int n)
{
    double result = 1.0;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    double x;
    int n;
    printf("请输入两个数x和n：\n");
    scanf("%lf%d", &x, &n);
    printf("%.2f的%d次方为：%.2f\n", x, n, power(x, n));
    return 0;
}
