#include <stdio.h>

int gys(int x, int y);

int main()
{
    int x, y;
    
    printf("请输入两个整数：");
    scanf("%d%d", &x, &y);
    
    printf("%d和%d的最大公约数是%d。\n", x, y, gys(x, y));
    
    return 0;
}

int gys(int x, int y)
{
    if (y == 0) {
        return x;
    } else {
        return gys(y, x % y);
    }
}
