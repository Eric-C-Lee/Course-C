#include <stdio.h>
#include <Carbon/Carbon.h> //macOS下使用Carbon.h替代windows.h

float power(int i,int k){
    float power=1;
    int j;
    for( j=1;j<=k;j++)
        power*=i;
    return power;
}

float f( int n,int k){
        float sum=0;
        int i;
        for(i=1;i<=n;i++)
            sum += power(i,k);
        return sum;
}

int main (){
            int n,k;
            printf("input n k: ");
            scanf("%d %d", &n, &k) ;
            printf("%10f\n",f(n,k));
            system("read");
}

