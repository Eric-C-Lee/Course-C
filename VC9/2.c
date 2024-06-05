#include <stdio.h>
#include <Carbon/Carbon.h> //macOS下使用Carbon.h替代windows.h

int a,b;
void f1(){
    int t1,t2;
    t1=a*2;
    t2=b*3;
    b=100;
    printf("t1=%d,t2=%d\n",t1,t2);
}

int main(){//main函数必须为int
    a=2;b=4;
    printf("Press Enter to continue...");    //由于macOS没有pause指令,放在这里使用read指令,并手动提示
    f1();
    printf("a=%d,b=%d",a,b);
    system("read");//macOS下没有pause指令,而有read指令
}
