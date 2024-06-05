#include <stdio.h>
#define pi 3.1415926

int main() { 
	int r;
	double s;
	printf("请输入圆的半径：");
    scanf("%d",&r);
    r=r*r;
    s=(pi*r);
    printf("圆的面积是：%lf",s);
}

