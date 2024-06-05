//
//  8、已知一个整数,判断该数是否大于20并且是奇数。

//  VC2
//
//  Created on 2022/3/17.
//

#include <stdio.h>
int main()
{
    int num = 31; // 大于20且为奇数
    if(num > 20 && num % 2 == 1) // 判断是否大于20且为奇数
    {
        printf("%d大于20且是奇数\n", num);
    }
    else
    {
        printf("%d不符合条件\n", num);
    }
    return 0;
}
