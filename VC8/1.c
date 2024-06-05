#include <stdio.h>
#include <math.h>

// 判断一个数是否为质数
int isPrime(int n)
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int count = 0;
    for (int i = 200; i <= 998; i++)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            printf("(%d, %d)\n", i, i + 2);
            count++;
        }
    }
    printf("共有%d对双胞胎数\n", count);
    return 0;
}
