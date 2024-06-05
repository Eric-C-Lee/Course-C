//
//  main.c
//  VC5
//2、排序两个数。
//  Created by Eric on 2022/4/9.
//

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("从小到大排序后的结果为：%d %d\n", a, b);
    return 0;
}
