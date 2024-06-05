//
//     p169  五. 1
//
#include <stdio.h>

int main(void) {
    int n, count = 0;
    int a[5];

    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &n);

    while (n) { // 按位取余保存每一位数字，直到n变为0
        a[count++] = n % 10;
        n /= 10;
    }

    printf("这是%d位数，每一位数字为：", count);
    for (int i = count-1; i >= 0; i--) { // 倒序输出每一位数字
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
