//
//  
//
// p147  例 7.10
//

#include <stdio.h>
#define N 10

int main() {
    int a[N] = {-12, 0, 6, 16, 23, 56, 80, 100, 110, 115};
    int n, low, mid, high, found;
    low = 0;
    high = N - 1;
    found = 0;
    printf("输入要查找的数:");
    scanf("%d", &n);
    while (low <= high) {
        mid = (low + high) / 2;
        if (n == a[mid]) {
            found = 1;
            break;
        }
        else if (n > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (found == 1) {
        printf("The index of %d is %d", n, mid);
    }
    else {
        printf("There is not %d", n);
    }
    return 0;
}
