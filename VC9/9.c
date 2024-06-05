#include <stdio.h>
#define MAX(a,b) (a>b)?a:b
int main(){
    int x,y,max;
    scanf("%d%d",&x,&y);
    max=MAX(x,y);
    printf("max= %d\n",max);
}
