#include <stdio.h>

int main() {
double sum = 0;
for (int i = 0, numerator = 2, denominator = 3; i < 30; i++, numerator += 2, denominator += 3) {
sum += (double)numerator / denominator;
}
printf("前30项之和为%.10lf\n", sum);
return 0;
}
