//
//  3、教材 ：p178  例 8.2
//

#include <stdio.h>
#include <stdlib.h>
#include <Carbon/Carbon.h>

int main(){
    int a=22,*p, * * pp;
    p=&a;
    pp=&p;
    printf(" *p=%d\n" , *p);
    printf(" * * pp= %d\n", * * pp);
    system("read");
}
