//
//  main.c
//  VC5
//9、给一个不多于5位的整数，要求：求出它是几位数；
//  Created by Eric on 2022/4/10.
//

#include <stdio.h>

int main() {
    int num, n = 0;
    printf("请输入一个不多于5位的整数：");
    scanf("%d", &num);
    if (num >= 10000) {
        n = 5;
    } else if (num >= 1000) {
        n = 4;
    } else if (num >= 100) {
        n = 3;
    } else if (num >= 10) {
        n = 2;
    } else {
        n = 1;
    }
    printf("%d是%d位数", num, n);
    return 0;
}
