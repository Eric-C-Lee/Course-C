//
//  
//
//  p136  例 7.3
//

#include <stdio.h>
#include <Carbon/Carbon.h>
#define N 5

int main() {
    int i, j, k, max, min;
    static int a[N];
    for (i = 0; i < N; i++) scanf("%d", &a[i]);
    max = min = a[0];
    j = k = 0;
    for (i = 0; i < N; i++) {
        if (max < a[i]) {
            max = a[i];
            j = i;
        } else if (min > a[i]) {
            min = a[i];
            k = i;
        }
    }
    printf("max: a[%d]=%d, min: a[%d]=%d\n", j, max, k, min);
    return 0;
}
