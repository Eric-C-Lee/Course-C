//
//  
//
//     p169  五. 1
//
#include <stdio.h>

int main() {
    int num, digits = 0, i, j;
    int arr[5] = {0};
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);
    if (num >= 10000) {
        digits = 5;
    }
    else if (num >= 1000) {
        digits = 4;
    }
    else if (num >= 100) {
        digits = 3;
    }
    else if (num >= 10) {
        digits = 2;
    }
    else {
        digits = 1;
    }
    printf("该数是%d位数，各位数字为：", digits);
    for (i = digits - 1; i >= 0; i--) {
        arr[i] = num % 10;
        num /= 10;
    }
    for (j = 0; j < digits; j++) {
        printf("%d ", arr[j]);
    }
    return 0;
}
