#include <stdio.h>
#include <ctype.h>

// 判断字符是否为大写字母
int isUpper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    int count = 0;
    printf("请输入若干个字符，并以换行结束：\n");
    while ((ch = getchar()) != '\n')
    {
        if (isUpper(ch))
            count++;
    }
    printf("输入的字符中有%d个大写字母\n", count);
    return 0;
}
