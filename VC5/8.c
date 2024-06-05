//
//  main.c
//  VC5
//8.输入一个星期的序号，输出英文的星期几。
//  Created by Eric on 2022/4/10.
//

#include <stdio.h>

int main() {
    int day;
    printf("请输入星期几的数字（1-7）：");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("输入错误！");
            break;
    }
    return 0;
}
