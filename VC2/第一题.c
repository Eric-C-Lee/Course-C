//
//  1、一只猴子第一天吃了2只桃子，第二天比第一天多吃1只桃子，猴子两天一共吃了几只桃子？
//  VC2
//
//  Created on 2022/3/17.
//

#include <stdio.h>

int main()
{
    int day = 2; // 第二天开始
    int sum = 2; // 第一天吃了2只桃子
    while(day <= 2) // 只算两天
    {
        sum += (day + 1); // 每天比前一天多吃1只桃子
        day++;
    }
    printf("猴子两天一共吃了%d只桃子\n", sum);
    return 0;
}
