//
// Created by Eric on 2022/6/8.
//
//p274  四  1, 2
#include "stdio.h"
#include "Carbon/Carbon.h"
int main(){
    FILE *fp;
    long num=0;
    if ((fp=fopen("t1.txt","r"))==NULL){
        printf("Open error\n");
        exit(0);
    }
    while(!feof(fp)){
        fgetc(fp);
        num++;
    }
    printf("num=%ld\n",num-1);
    fclose(fp);
}
