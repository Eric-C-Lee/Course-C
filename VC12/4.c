//
//  4、教材 ：p178  例 8.3
//

#include <stdio.h>
#include <stdlib.h>
#include <Carbon/Carbon.h>

int main(){
    int a,b;
    int * pa, * pb;
    void swap(int * p1, int * p2);
    scanf("%d%d",&a,&b);
    pa=&a;
    pb=&b;
    swap(pa,pb);
    printf("\na= %d,b= %d\n",a,b);
    system ("read");
}

void swap(int * p1, int * p2){
    int temp;
    temp= * p1;
    * p1= * p2;
    * p2 = temp;
}
