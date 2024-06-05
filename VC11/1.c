//
//  1、教材 ：p139  例 7.4 （二维数组的输入和输出）
//

#include <stdio.h>
#include <Carbon/Carbon.h>

int main(void){
    int a[2][3];
    int j,k;
    printf("\nInput array a:");
    for (j=0;j<2;j++)
         for (k=0;k<3;k++)
             scanf("%d",&a[j][k]);
        printf("\nOutput array a: \n");
        for (j=0;j<2;j++){
            for (k=0;k<3;k++)
                printf("%4d",a[j][k]);
            printf("\n");
        }
        system("read");
    }
    
