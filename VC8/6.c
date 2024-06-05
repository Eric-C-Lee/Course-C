#include <stdio.h>

int main()
{
    int i, j;
    int a[30][30] = {0};
    for (i = 0; i < 9; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
