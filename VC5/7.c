//
//  main.c
//  VC5
//7、编程实现：根据两个数sex和tall分类, 如果sex为'F';，当tall大于等于150时，输出 A，否则输出  B ；若sex不为'F'， 当tall大于等于170时，输出A，否则输出B。
//  Created by Eric on 2022/4/9.
//

#include <stdio.h>

int main() {
    int tall;
    char sex, category;
    printf("请输入性别（F/M）和身高：");
    scanf("%c %d", &sex, &tall);
    if (sex == 'F') {
        if (tall >= 150) {
            category = 'A';
        } else {
            category = 'B';
        }
    } else {
        if (tall >= 170) {
            category = 'A';
        } else {
            category = 'B';
        }
    }
    printf("根据性别和身高分类结果为：%c", category);
    return 0;
}
