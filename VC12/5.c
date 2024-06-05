//
//  5、教材 ：p179  例 8.4
//

#include <stdio.h>
#include <stdlib.h>
#include <Carbon/Carbon.h>

int main (){
    int a,b;
    void swap(int * p1,int * p2);
    scanf("%d%d",&a,&b);
    swap (&a, &b);
    printf("\na=%d,b=%d\n",a,b);
    system ("read");
}

void swap(int * p1, int * p2){
    int temp;
    temp= * p1;
    * p1= * p2;
    * p2= temp;
}
