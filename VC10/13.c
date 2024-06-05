//
//  
//
//p47  4）设计性实验 （3）
//

#include <stdio.h>

#define SWAP(a, b) { \
    int t = a;       \
    a = b;           \
    b = t;           \
}

int main() {
    int x, y;

    printf("输入两个需要交换的xy: ");
    scanf("%d%d", &x, &y);

    SWAP(x, y);

    printf("交换后： x = %d, y = %d\n", x, y);

    return 0;
}
