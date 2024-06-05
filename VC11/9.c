//
//    9、教材 ：p153  例 7.15
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[10]="program",str2[6]="C";
    puts(str1);
    puts(str2);
    strcpy(str1,str2);
    printf("str1:");
    puts(str1);
    printf("str2:");
    puts(str2);
}
