//
//  
//
//  4、把一个十进制数按二进制形式输出(整数部分)。
//

#include <stdio.h>

int main()
{
    int n, i, j, arr[32];
    printf("请输入一个十进制数：\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("负数没有二进制形式！\n");
        return 0;
    }
    i = 0;
    while(n!=0)
    {
        arr[i] = n%2;
        n /= 2;
        i++;
    }
    printf("十进制数转换为二进制数的结果为：\n");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    return 0;
}
