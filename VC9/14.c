#include <stdio.h>

void change(int x, int r) {
    int a[100], i = 0;
    while (x) {
        a[i++] = x % r;
        x /= r;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", a[j]);
    }
}

int main() {
    int x, r;
    printf("x: ");
    scanf("%d", &x);
    printf("r: ");
    scanf("%d", &r);
    change(x, r);
    printf("\n");
    return 0;
}
