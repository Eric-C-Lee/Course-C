//
//  
//
// p145  例 7.9
//

#include <stdio.h>
#define N 10

int main() {
    int i, j, t, k;
    int a[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N - 1; i++) {
        k = i;
        for (j = i + 1; j < N; j++) {
            if (a[k] < a[j]) {
                k = j;
            }
        }
        if (k != i) {
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
    printf("\n");
    for (i = 0; i < N; i++) {
        printf("%6d", a[i]);
    }
    return 0;
}
