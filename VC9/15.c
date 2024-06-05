#include <stdio.h>

int is_prime(int n) { // 判断素数
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int check(int n) { // 判断各位数宇和是否为素数
    int sum = 0;
    while (n) {
        int digit = n % 10;
        if (!is_prime(digit)) { // 如果有一位不是素数，则返回 0
            return 0;
        }
        sum += digit;
        n /= 10;
    }
    return is_prime(sum); // 判断各位数宇之和是否为素数
}

int main() {
    int count = 0; // 计数器，记录满足条件的数的个数
    for (int i = 1; i <= 1000; i++) { // 枚举 1~1000 中的每个数
        if (check(i)) { // 如果满足条件，则输出
            printf("%d ", i);
            count++;
            if (count % 5 == 0) { // 每行输出5个数
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}
