//
//  
//
//p47  4）设计性实验 （3）
//

#include <stdio.h>

int main() {
    int n;
    int i;
    int max_index = 0, min_index = 0;
    double a[100];

    printf("请输入数组的大小 n （1 <= n <= 100）：");
    scanf("%d", &n);

    printf("请输入 %d 个实数：", n);
    for (i = 0; i < n; i++)
        scanf("%lf", &a[i]);

    for (i = 1; i < n; i++) {
        if (a[i] > a[max_index])
            max_index = i;
        if (a[i] < a[min_index])
            min_index = i;
    }

    printf("最大值下标为：%d，最小值下标为：%d\n", max_index, min_index);

    return 0;
}

