#include <stdio.h>

int main()
{
    int arr[5][5];
    int i, j, sum = 0;

    // 输入数组
    printf("请输入一个5*5的整型数组：\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 求周边元素和
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 0 || j == 4) // 周边元素
            {
                sum += arr[i][j];
            }
        }
    }

    // 输出结果
    printf("该数组所有周边元素的和为：%d\n", sum);

    return 0;
}
