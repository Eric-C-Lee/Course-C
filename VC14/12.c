//
// Created by Eric on 2022/6/8.
//
//p274  四   2
#include "stdio.h"
#include "Carbon/Carbon.h"
int main(){
    FILE *fp;
    char ch,fname[20];
    printf("输入文件名：");
    gets(fname);
    if ((fp = fopen(fname,"w"))==NULL){
        printf("Can not open \n");
        exit(0);
    }
    printf("Enter data: \n");
    while((ch= getchar())!='#')
        fputc(ch,fp);
    fclose(fp);
}

