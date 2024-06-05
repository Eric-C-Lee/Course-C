# include <stdio.h>
# include <string.h>

// 9、教材 ：p200  例 8.18  
void remove_char(char str[], char c){
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}
int main(){
    char str[100], c;
    printf("请输入一个字符串：");
    fgets(str, sizeof(str), stdin);
    printf("请输入要删除的字符：");
    scanf("%c", &c);
    remove_char(str, c);
    printf("删除后的字符串为：%s", str);
    return 0;
}
