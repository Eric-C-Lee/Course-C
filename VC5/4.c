//
//  main.c
//  VC5
//4、输入一个字符，若是小写字母，则变成大写字母，否则原样输出。
//  Created by Eric on 2022/4/9.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("请输入一个字符：");
    ch = getchar();
    if (islower(ch)) {
        ch = toupper(ch);
    }
    printf("处理后的结果是%c\n", ch);
    return 0;
}
