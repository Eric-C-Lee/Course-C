#include <stdio.h>
#define L (x*x+2*x+x)
int main(){
    int x,y;
    printf("input a number: ");
    scanf("%d",&x);
    y=L*L+2*L+10;
    printf("y=%d\n",y);
}
