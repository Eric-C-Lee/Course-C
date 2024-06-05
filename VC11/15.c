//
//    15、教材 ：p161  例 7.21
//
#include <stdio.h>

int main(void) {
    int n, m, k = 0, flag = 1;
    int digit[10];
    printf("请输入一个正整数n：");
    scanf("%d", &n);
    m = n; // 备份n的值
    while (m) { // 按位取余保存每一位数字，直到m变为0
        digit[k++] = m % 10;
        m /= 10;
    }
    for (int i = 0; i < k/2; i++) { // 判断首位和末位是否相等
        if (digit[i] != digit[k-i-1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("%d是一个回文数\n", n);
    } else {
        printf("%d不是一个回文数\n", n);
    }
    return 0;
}
