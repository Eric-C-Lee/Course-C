//
// Created by Eric on 2022/6/8.
//
//p261  例 10.2
#include "stdio.h"
#include "Carbon/Carbon.h"
int main(){
    FILE *fp;
    char str1;
    if ((fp=fopen("datafile1.txt","w"))==NULL){
        printf("file cannot be opened.\n");
        exit(1);
    }
    while((str1=fgetc(stdin))!='\n')
        fputc(str1,fp);
    fclose(fp);
    system("read");
}