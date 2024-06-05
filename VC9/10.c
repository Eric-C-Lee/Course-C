#include <stdio.h>
#include <math.h>
# define power(y) (y) * (y)
int main(){
    double x, y;
    scanf("%lf",&x);
    y=power(sin(x)+1);
    printf("y=%6.4f\n",y);
}

