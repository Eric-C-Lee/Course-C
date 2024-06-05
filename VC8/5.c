#include <stdio.h>
//编写一个程序，求从m中取n个数的组合数。
int main()
{
    int m, n, i, j;
    int combination = 1;
    
    printf("请输入m和n：");
    scanf("%d%d", &m, &n);
    
    // 计算组合数
    for (i = m, j = 1; j <= n; i--, j++) {
        combination = combination * i / j;
    }
    
    printf("从%d中取%d个数的组合数为%d。\n", m, n, combination);
    
    return 0;
}
