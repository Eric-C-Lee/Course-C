#include <stdio.h>

int main()
{
    int n, max, min, sum = 0;
    double average;
    printf("请输入数字个数：");
    scanf("%d", &n);
    int nums[n];
    printf("请输入%d个数字，以空格分隔：", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        if(i == 0)
        {
            max = min = nums[i];
        }
        else
        {
            if(nums[i] > max)
            {
                max = nums[i];
            }
            if(nums[i] < min)
            {
                min = nums[i];
            }
        }
        sum += nums[i];
    }
    average = (double)sum / n;
    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);
    printf("平均值：%.2lf\n", average);
    return 0;
}
