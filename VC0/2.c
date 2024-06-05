#include <stdio.h>

int main() {
    int n = 40;
    double s = 1.0 / 3.0;
    double a=1.0,b= 3.0;

    for (int i = 2; i <= n; i++) {
        a *= i - 1;
        b *= 2 * i - 1;
        s += a/b;
    }

    printf("s的值为：%.10f\n", s);

    return 0;
}
