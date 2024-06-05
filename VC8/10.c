#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    printf("请输入要求第几项的Fibonacci数：");
    scanf("%d", &n);
    printf("第%d项的Fibonacci数为%d\n", n, fibonacci(n));
    return 0;
}
