//
// Created by Eric on 2022/6/8.
//
//p261  例 10.1
#include "stdio.h"
#include "Carbon/Carbon.h"
int main(){
    FILE *fp;
    char ch;
    if ((fp=fopen("datafile.txt","r"))==NULL){
        printf("file cannot be opened.\n");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
        fputc(ch,stdout);
    fclose(fp);
    system("read");
}