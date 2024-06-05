//
//  main.c
//  VC5
//10、输入年号，判断它是否为闰年。
//  Created by Eric on 2022/4/11.
//

#include <stdio.h>

int main() {
    float s, p, w, d, f;
    printf("请输入货物重量（吨）和运输距离（公里）：");
    scanf("%f %f", &w, &s);
    if (s < 250) {
        d = 0;
    } else if (s < 500) {
        d = 0.02;
    } else if (s < 1000) {
        d = 0.05;
    } else if (s < 2000) {
        d = 0.08;
    } else if (s < 3000) {
        d = 0.1;
    } else {
        d = 0.15;
    }
    printf("请输入每公里每吨货物的基本运费：");
    scanf("%f", &p);
    f = p * w * s * (1 - d);
    printf("总运费为：%.2f元", f);
    return 0;
}
