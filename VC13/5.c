# include <stdio.h>
# include <string.h>

//5、教材 ：p193  例 8.14 (可以自己编写)
int main() {
    char str1[100] = "Hello, World!";
    char str2[100];
    int n = 6;

    // 指向字符串 str1 的第 n 个字符
    char *p = &str1[n];

    // 复制从第 n 个字符开始的剩余字符到 str2
    strcpy(str2, p);

    printf("原始字符串为：%s\n", str1);
    printf("复制后的字符串为：%s\n", str2);

    return 0;
}
