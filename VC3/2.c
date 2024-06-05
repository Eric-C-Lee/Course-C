//
//    #include <stdio.h>  int main() {     int result = -1 + 2.5 * 3 + 'a';     printf("result = %d\n", result);     return 0; }  2.c
//  VC3
//
//  Created by Eric on 2022/3/23.
//

#include <stdio.h>


int main() {
    int a = 1;
    char b = 'a';
    char c = 1 + 2 + b;
    printf("%c\n", c);
    return 0;//在表达式中，先计算1+2，得到3，然后将3与字符常量'a'相加，得到一个ASCII码为100的字符，最终结果类型为字符型。
}
