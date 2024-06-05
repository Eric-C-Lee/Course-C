//
//  1.c
//  
//
//  p133  例 7.1
//

#include <stdio.h>

int main() {
    int i, a[5];
    for (i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("\n大于 0 的数有：");
    for (i = 0; i < 5; i++) {
        if (a[i] > 0)
         printf("%4d ", a[i]);
    }
    printf("\n");
}
