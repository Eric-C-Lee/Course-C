//
//    8、教材 ：p152  例 7.14
//

#include <stdio.h>
#include <Carbon/Carbon.h>

int main(void) {
    char s[20],sl[20];
    scanf("%s",s);
    printf("%s\n",s);
    fflush(stdin);
    scanf("%s%s",s,sl);
    printf("s=%s,sl=%s",s,sl);
    puts("\n");
    fflush(stdin);
    gets(s);
    puts(s);
    system("read");
}
