//
// 8、教材 ：p184  例 8.8 （较高要求）
//

#include <stdio.h>
#include <Carbon/Carbon.h>
#include <math.h>

int main() {
    float area(float,float),length(float,float);
    float m,n;
    float s,l;
    float (*q) ( float, float);
    scanf("%f%f",&m,&n);
    q=area;
    s=(*q)(m,n);
    q=length;
    l=(*q)(m,n);
    printf("Area of the right triangle is %.2f\n",s) ;
    printf("Length of the hypotenuse is %.2f\n",l) ;
    system ("read");
}

float area(float a, float b) {
    float z;
    z=a * b/2;
    return(z);
}

float length(float a,float b){
    float z;
    z=sqrt(a*a+b*b);
    return(z);
}
