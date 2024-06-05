#include <stdio.h>


int main(){
    int a,s=100 , p=100;
    printf("\n input a number: \n");
    scanf("%d",&a) ;
    if(a>0){
        int s,p;
        s=a+a;
        p=a*a;
        printf("s=%d p=%d\n",s,p);
    }
    printf("s=%d p=%d\n",s,p);

}
