//
// 7、教材 ：p183  例 8.7 （较高要求）
//

#include <stdio.h>
#include <stdlib.h>
#include <Carbon/Carbon.h>
#define M 8

int main() {
    float sumf, sump;
    float a[M] = {11,2,-3,4.5,5,69,7,80};
    float ( * p) (float a[], int n);
    float maximum (float a[],int n);
    p= maximum;
    sump= ( * p) (a, M) ;
    printf("sump = %.2f\n" ,sump);
    system("read");
}

float maximum(float a[], int n) {
    int k;
    float x;
    x=a[0];
    for (k=0;k<n;k++)
        if (x<a[k])x=a[k];
        return x;
}
