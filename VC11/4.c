//
//   4、有一个3×4的矩阵，要求编程序求出其中值最大的那个元素的值，以及所在的行号和列号。 
//

#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int max = matrix[0][0];
    int row = 0;
    int col = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("最大值：%d，所在位置：[%d, %d]\n", max, row, col);
    return 0;
}
