#include <stdio.h>
#define SQR(y) ((y) * (y))
int sqr(int y){
    return((y) * (y));
}
int main(){
    int i,j;
    for(i=1,j=1;i<=5;){
        printf("%d",sqr(i++));
        printf("%d\n", SQR(j++));
    }
}

