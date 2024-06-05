# include <stdio.h>
# include <string.h>
# include <Carbon/Carbon.h>

// 7、教材 ：p198  例 8.16
int main(int argc,char * argv[]){
	int i=0;
	printf("argc=%d\n",argc);
	while(argc>=1){
		printf("\n 参数%d:%s",i,*argv);
		i++;
		argc--;
		argv++;
	}
	system("read");
}
