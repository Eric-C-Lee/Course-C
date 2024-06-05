//
//    14、教材 ：p159  例 7.20
//
#include <stdio.h>

int main(void) {
    int n = 10; // 输出n行
    int a[11][11] = {0}; // 初始化杨辉三角数组为0

    for (int i = 1; i <= n; i++) {
        a[i][1] = 1; // 第一列都是1
        for (int j = 2; j <= i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j]; // 根据上一行计算当前行
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", a[i][j]); // 输出数字和空格
        }
        printf("\n"); // 换行
    }

    return 0;
}
