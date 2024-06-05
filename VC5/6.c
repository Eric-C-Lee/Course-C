//
//  main.c
//  VC5
//6、把一个百分制成绩转变为A,B,C,D,E五级分制成绩。
//  Created by Eric on 2022/4/9.
//

#include <stdio.h>

int main() {
    int score;
    char grade;
    printf("请输入百分制成绩：");
    scanf("%d", &score);
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    printf("五级分制成绩为：%c", grade);
    return 0;
}
