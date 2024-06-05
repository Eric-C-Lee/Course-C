#include <stdio.h>

int main()
{
    int x, y, i, max, min;
    printf("请输入两个整数：");
    scanf("%d%d", &x, &y);
    
    // 求最大公约数
    max = x > y ? x : y;
    for (i = max; i >= 1; i--) {
        if (x % i == 0 && y % i == 0) {
            printf("%d和%d的最大公约数是%d。\n", x, y, i);
            break;
        }
    }
    
    // 求最小公倍数
    min = x * y / i;
    printf("%d和%d的最小公倍数是%d。\n", x, y, min);
    
    return 0;
}
