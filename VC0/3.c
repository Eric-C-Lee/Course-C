#include<stdio.h>
int main()
{
    int i, j, n=9;
    for(i=1; i<=n; i++)
    {
        // 打印空格
        for(j=1; j<=n-i; j++)
            printf("  ");
        // 打印左边的数字
        for(j=1; j<=i; j++)
            printf("%d ", j);
        // 打印右边的数字
        for(j=i-1; j>=1; j--)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
