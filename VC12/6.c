//
// 6、教材 ：p182  例 8.6
//

#include <stdio.h>
#include <stdlib.h>
#include <Carbon/Carbon.h>

int main(){
    int a,b, * p;
    int * minp (int * ,int * );
    printf ("\n input a b:");
    scanf("%d%d",&a,&b);
    p=minp(&a,&b);
    printf("\n min= %d\n", * p) ;
    system ("read");
}

int * minp(int * x,int * y) {
    int * q;
    if (* x< * y)
    q=x;
    else q=y;
    return (q);
}
