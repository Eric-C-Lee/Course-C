#include <stdio.h>

int main()
{
    double sum = 0.0;
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 1)
        {
            sum += 1.0 / i;
        }
        else
        {
            sum -= 1.0 / i;
        }
    }
    printf("1-1/2+1/3-1/4+...+1/99-1/100=%.2lf\n", sum);
    return 0;
}
