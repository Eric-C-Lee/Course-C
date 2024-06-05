#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
if (n <= 1) {
return false;
}
for (int i = 2; i * i <= n; i++) {
if (n % i == 0) {
return false;
}
}
return true;
}

int main() {
int n;
printf("请输入一个整数：");
scanf("%d", &n);
if (isPrime(n)) {
printf("%d是质数\n", n);
} else {
printf("%d不是质数\n", n);
}
return 0;
}

