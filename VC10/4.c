//
//  
//
//       p144  例 7.8
//

#include <stdio.h>

int main() {
    float score[100], ave, sum = 0, x;
    int i, n = 0, count;
    printf("Input score:");
    scanf("%f", &x);
    while (x >= 0 && n < 100) {
        sum += x;
        score[n++] = x;
        scanf("%f", &x);
    }
    ave = sum / n;
    printf("average = %f\n", ave);
    if (score[i] > ave) {
        printf("%f", score[i]);
        count++;
        if (count % 5 == 0)
        printf("\n");
        }
        printf("count = %d\n", count);
}
