//
//  main.c
//  VC5
//10、输入年号，判断它是否为闰年。
//  Created by Eric on 2022/4/10.
//

#include <stdio.h>

int main() {
    int year;
    printf("请输入年份：");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d是闰年", year);
    } else {
        printf("%d不是闰年", year);
    }
    return 0;
}
