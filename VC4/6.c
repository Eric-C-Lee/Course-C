//
//  6.c
//  输入一个字符串，只输出前面两个字符
//
//  Created by Eric on 2022/4/1.
//

#include <stdio.h>
int main() {
    char str[100];
    printf("请输入一个字符串：");
    scanf("%s", str);

    printf("前两个字符是：%c%c\n", str[0], str[1]);
    return 0;
}
