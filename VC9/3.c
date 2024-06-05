#include <stdio.h>

int vs(int l, int w){
    extern int h;
    int v;
    v=l* w * h;
    return v;
}
   
int main(){
    extern int w,h;
    int l=5;
    printf("v=%d", vs(l,w)) ;
}
int l=3,w=4,h=5;
