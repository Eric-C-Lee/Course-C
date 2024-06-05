# include <stdio.h>
# include <math.h>
# include <Carbon/Carbon.h>

//3、教材 ：p190  例 8.11
int main(){
	int a[2][3]={{0,1,2},{3,4,5}};
	int k,j,*p;
	for(j=0;j<2;j++){
		for(k=0;k<3;k++)
			printf("%5d",*(a[j]+k));
		putchar('\n');
	}
	p=*a;
	for(j=0;j<2;j++){
		for(k=0;k<3;k++)
			printf("%5d",*(p++));
		putchar('\n');
	}
	system("read");
}
