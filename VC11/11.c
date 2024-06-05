//
//    11、教材 ：p155  例 7.17
//

#include <stdio.h>
#include <Carbon/Carbon.h>
#include <string.h>

int main(void) {
    int len1,len2;
    char s1[8],s2[80];
    gets(s1);
    gets(s2);
    if(strcmp(s1, s2)!=0)
        if(strlen(s1)>strlen(s2)){
            strcat(s1, s2);
            puts(s1);
        }else{
            strcat(s2, s1);
            puts(s2);
        }
    system("read");
}
