//
//  
//
//p45  2）程序填空  （2)
//
#include <stdio.h>

int main() {
    int n = 0, a[100], i;
    for (i = 1; i <= 100; i++) {
        if (i % 7 == 0 || i % 11 == 0) {
        a[n] = i;
        n++;
        }
    }
    printf("n = %d\n", n);
    for (i = 0; i < n; i++) {
        if (i % 5 == 0) {
            printf("\n");
        }
        printf("%d\t", a[i]);
    }
    printf("\n");
}
