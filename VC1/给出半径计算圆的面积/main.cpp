//给出半径计算圆的面积.
#include <stdio.h>
#define pai 3.1415926
int main(){
	int r;
	double s;
	printf("请输入圆的半径：");
	scanf("%d",&r);
	s=pai*r*r;
	printf("%f",s);
} 
