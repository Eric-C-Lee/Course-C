#include <stdio.h>


int main(){
    register int i,s=0;
    for (i=1;i<=10;i++)
        s+=i*i;
    printf("s=%d",s) ;
}

