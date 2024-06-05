//
//  main.c
//  VC5
//5、有一函数：当x<1时，y=x；当x>=1且x<10时，y=2x-1；当x>=10时，y=3x-11，写一程序，输入x，输出y值
//  Created by Eric on 2022/4/9.
//

#include <stdio.h>

int main() {
    float x, y;
    printf("请输入x的值：");
    scanf("%f", &x);
    if (x < 1) {
        y = x;
    } else if (x < 10) {
        y = 2 * x - 1;
    } else {
        y = 3 * x - 11;
    }
    printf("y的值为：%f", y);
    return 0;
}
