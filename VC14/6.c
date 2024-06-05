//
// Created by Eric on 2022/6/8.
//
//     5、教材 ：p224  上面的例题
#include "stdio.h"
#include "Carbon/Carbon.h"
#include "stdlib.h"
int main(){
    int *p,t;
    p=(int *)malloc(40 * sizeof(int));
    if(!p){
        printf("\t out of memory!\t");
        exit(0);
    }
    for(t=0;t<40;++t) *(p+t)=t;
    for(t=0;t<40;++t) printf("\t%d",*(p+t));
    free(p);
    system("read");
}