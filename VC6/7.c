#include <stdio.h>

int main()
{
    double sum = 0.0;
    for(int i = 1, j = 100; i <= 50; i++, j--)
    {
        sum += (double)i / (double)j;
    }
    printf("1/100+2/99+...+50/51=%.2lf\n", sum);
    return 0;
}
