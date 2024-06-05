//
//  
//
//p45  2）程序填空  （1)
//
#include <stdio.h>

int main() {
    int x, i, k = 10;
    int a[11] = {8, 18, 28, 38, 48, 58, 68, 78, 88, 98};

    printf("请输入需要插入的一个整数：");
    scanf("%d", &x);

    for (i = 0; i <= 9; i++) {
        if (x < a[i]) {
            k = i;
            break;
        }
    }

    for (i = 10; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;

    for (i = 0; i < 11; i++) {
        printf("%5d", a[i]);
    }

    printf("\n");

    return 0;
}
