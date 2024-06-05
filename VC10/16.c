//
//  
//
//p45  3）程序改错  （1)
//
#include <stdio.h>

int main() {
    int x, i, j, k;
    int a[10] = {8, 18, 28, 38, 48, 58, 68, 78, 88, 98};
    printf("请输入需要删除的一个整数: ");
    scanf("%d", &x);
    i = 0;
    j = 9;
    while (i <= j) {
        k = (i + j) / 2;
        if (a[k] == x) {
            break;
        } else if (a[k] > x) {
            j = k - 1;
        } else {
            i = k + 1;
        }
    }
    if (i > j) {
        printf("需要删除的数不在数组中\n");
    } else {
        for (; k < 9; k++) {
            a[k] = a[k + 1];
        }
        for (i = 0; i < 9; i++) {
            printf("%5d", a[i]);
        }
        printf("\n");
    }
    return 0;
}
