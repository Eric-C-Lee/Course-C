#include <stdio.h>
#include <Carbon/Carbon.h> //macOS下使用Carbon.h替代windows.h

void f1(){
    int a=3,b=2;
    a*=b;
    b/=2;
    printf("a=%d,b=%d\n",a,b);}

int main(){//main函数必须为int
    int a=4,b=3;
    printf("Press Enter to continue...");    //由于macOS没有pause指令,放在这里使用read指令,并手动提示
    f1();
    printf("a=%d,b=%d",a,b);
    system("read");//macOS下没有pause指令,而有read指令
    return 0;//纠错
}

