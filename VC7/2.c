#include <stdio.h>
//2、输出九九乘法表。
int main() {
for (int i = 1; i <= 9; i++) {
for (int j = 1; j <= i; j++) {
printf("%d*%d=%2d ", i, j, i * j);
}
printf("\n");
}
return 0;
}
