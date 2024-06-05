#include <stdio.h>

int main() {
int n;
printf("请输入一个十进制数：");
scanf("%d", &n);
printf("二进制表示为：");
if (n < 0) {
putchar('-');
n = -n;
}
int binary[32];
int i = 0;
while (n > 0) {
binary[i++] = n % 2;
n /= 2;
}
if (i == 0) {
putchar('0');
} else {
for (int j = i - 1; j >= 0; j--) {
printf("%d", binary[j]);
}
}
printf("\n");
return 0;
}
