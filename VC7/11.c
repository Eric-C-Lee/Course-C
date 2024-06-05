#include <stdio.h>

int main() {
double x;
printf("请输入一个十进制小数：");
scanf("%lf", &x);
printf("二进制表示为：");
if (x < 0) {
putchar('-');
x = -x;
}
int intpart = (int)x;
if (intpart == 0) {
putchar('0');
} else {
int binary[32];
int i = 0;
while (intpart > 0) {
binary[i++] = intpart % 2;
intpart /= 2;
}
for (int j = i - 1; j >= 0; j--) {
printf("%d", binary[j]);
}
}
putchar('.');
double fracpart = x - intpart;
int i = 0;
while (i < 20) {
fracpart *= 2;
printf("%d", (int)fracpart);
if (fracpart >= 1) {
fracpart -= 1;
}
i++;
}
printf("\n");
return 0;
}
