//
//  2.c
//  求sin(30度)的值
//
//  Created by Eric on 2022/4/1.
//

#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main() {
    double angle = 30.0;
    double radian = angle * PI / 180;
    double sin_value = sin(radian);

    printf("sin(30度)的值为：%lf\n", sin_value);
    return 0;
}
