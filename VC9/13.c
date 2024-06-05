#include <stdio.h>
#include <Carbon/Carbon.h> //macOS下使用Carbon.h替代windows.h

int cton(){
    char ch;
    int n=0,n1=0;
    while ((ch=getchar())<='0' || ch>='9') {
        n1++;
        if(n1>=10){
            printf("data is wrong!");
            return 0;
        }
    }
    
    do{
        n=n*10+ch-'0';
    }while ((ch=getchar())>='0' && ch<='9');
    return n;
}

int main (){
    int m;
    printf("input m:");
    m=cton( );
    printf("\n m= %d\n" ,m) ;
    system("read");
}

