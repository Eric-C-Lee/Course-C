#include <stdio.h>
//3、求200到100之间第一个被7整除的数。
int main() {
int num = 200;
while (num >= 100) {
if (num % 7 == 0) {
printf("%d是第一个被7整除的数\n", num);
break;
}
num--;
}
if (num < 100) {
printf("不存在被7整除的数\n");
}
return 0;
}
