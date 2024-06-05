//
//   3、教材 ：p142  例 7.6
//

#include <stdio.h>
#include <Carbon/Carbon.h>
#define M 5
#define N 4

int main(void){
    int i,k;
    int a[M][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int b[N][M];
    for(i=0;i<M;i++)
        for(k=0;k<N;k++)
            b[k][i]=a[i][k];
    for(i=0;i<M;i++){
        for(k=0;k<N;k++)
            printf("%5d",a[i][k]);
        printf("\n");
    }
    for(i=0;i<N;i++){
        for(k=0;k<M;k++)
            printf("%5d",b[i][k]);
        printf("\n");
    }
    system("read");
}
    
