//
//  2、教材 ：p141  例 7.5
//

#include <stdio.h>
#include <Carbon/Carbon.h>

int main(void){
    int i,j;
    int a[4][4];
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            if(i%2==0||j%2==0)
                printf("%d",a[i][j]);
            else printf("%4c",' ');
        printf("\n");
    }
    system("read");
}
    
