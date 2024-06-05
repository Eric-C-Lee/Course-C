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
int sum = 0;
for (int i = 2; i <= 100; i++) {
if (isPrime(i)) {
sum += i;
}
}
printf("2到100之间所有质数之和为%d\n", sum);
return 0;
}
