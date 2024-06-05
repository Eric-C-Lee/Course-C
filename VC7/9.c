#include <stdio.h>

double factorial(int n) {
double result = 1;
for (int i = 1; i <= n; i++) {
result *= i;
}
return result;
}

int main() {
double sum = 0;
for (int i = 0; i < 100; i++) {
sum += 1 / factorial(i);
}
printf("前100项之和为%.10lf\n", sum);
return 0;
}

