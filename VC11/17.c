//
//     p169  五. 2
//
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 500; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) { // 如果j是i的因子，将其加入到因子和中
                sum += j;
            }
        }
        if (sum == i) { // 如果因子和等于i本身，则i是完数
            printf("%d=", i);
            for (int j = 1; j < i; j++) {
                if (i % j == 0) { // 输出i的因子
                    printf("%d", j);
                    printf("+");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
