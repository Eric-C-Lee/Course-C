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
for (int i = 0; i < 1000; i++) {
double sign = (i % 2 == 0 ? 1 : -1);
sum += sign / factorial(i * 2 + 1);
}
printf("前1000项之和为%.10lf\n", sum);
return 0;
}
