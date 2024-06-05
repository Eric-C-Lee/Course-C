#include <stdio.h>
#define pi 3.1415926

int main() { 
	int r;
	double v;
	printf("请输入圆的半径：");
    scanf("%d",&r);
    r=r*r*r;
    v=(pi*r);
    printf("圆的体积是：%lf",v);
}

