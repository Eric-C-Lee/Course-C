//
//  1.c
//  
//求一个数的绝对值
//  Created by Eric on 2022/4/1.
//

#include <stdio.h>

int main() {
    int num;
    printf("请输入一个数：");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }
    printf("这个数的绝对值是：%d\n", num);
    return 0;
}
