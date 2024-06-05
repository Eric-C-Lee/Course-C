//
//  
//
// 3、用数组求Fibonacci数列的前20项。
//

#include <stdio.h>

int main() {
    int fib[20];
    int i;
    fib[0] = 0;
    fib[1] = 1;
    for(i=2;i<20;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("斐波那契前二十项：\n");
    for(i=0;i<20;i++)
    {
        printf("%d ",fib[i]);
    }
    return 0;
}
