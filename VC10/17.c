//
//  
//
//p45  3）程序改错  （2)
//
#include <stdio.h>

int main() {
    int a[11], b[4], i, j;

    for (i = 1; i <= 10; i++)
        a[i] = i;

    for (i = 0; i < 4; i++)
        b[i] = 0;

    for (i = 0, j = 0; i <= 10; i++) {
        b[j] += a[i];

        if ((i + 1) % 3 == 0)
            j++;

        if (i == 10) {
            for (j = 3; j >= 0; j--)
                printf("%d ", b[j]);
        }
    }

    return 0;
}

