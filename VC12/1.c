//
// 1.教材 ：p173  例如，指针变量初始化
//

#include <stdio.h>
#include <Carbon/Carbon.h>

int main (){
    int a=18, * p=&a;
    printf("a=%d\n",a);
    printf("*p=%d\n" , * p);
    system ("read");
}
