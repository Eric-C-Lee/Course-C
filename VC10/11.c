//
//  
//
//   p43 实验11 一维数组
//

#include <stdio.h>

int main() {
    int f[21] = {0, 1, 1}, n;

    for (n = 3; n <= 20; n++) {
        f[n] = f[n - 1] + f[n - 2];
    }

    for (n = 1; n <= 20; n++) {
        printf("%5d", f[n]);

        if (n % 5 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
