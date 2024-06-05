//
//  3.c
//  输入3个字符，然后反序输出
//
//  Created by Eric on 2022/4/1.
//

#include <stdio.h>

int main() {
    char c1, c2, c3;
    printf("请输入3个字符：");
    scanf("%c%c%c", &c1, &c2, &c3);

    printf("反序输出为：%c%c%c\n", c3, c2, c1);
    return 0;
}
