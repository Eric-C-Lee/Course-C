#include <stdio.h>


int main(){
    int i;
    void f();
    for(i=1;i<=3;i++)
        f();
}
void f(){
        static int j=0;
    ++j;
    printf("%d\n",j);
}
