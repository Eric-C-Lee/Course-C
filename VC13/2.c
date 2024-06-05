# include <stdio.h>
# include <Carbon/Carbon.h>
# include <math.h>

//2、教材 ：p188  例 8.10
int  main(){
	int a[5],k,*p;
	p=a;
	for(k=0;k<5;k++)
		scanf("%d",p++);
	p=a;
	for(k=0;k<5;k++)
		printf("%6d",*(p++));
	system("read");
}
