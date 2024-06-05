//
// Created by Eric on 2022/6/8.
//
//p268  例 10.9
#include "stdio.h"
#include "Carbon/Carbon.h"
int main(){
    FILE *fp8,*fp9;
    float fdata1=25.68,fdata2;
    if((fp8=fopen("datafile8","wb"))==NULL){
        printf("can not open the file .\n");
        exit(1);
    }
    fwrite(&fdata1,sizeof(float),1,fp8);
    fclose(fp8);
    if((fp9=fopen("datafile8","rb"))==NULL){
        printf("can not open the file .\n");
        exit(1);
    }
    fread(&fdata2,sizeof(float),1,fp9);
    printf("fdata2=%.2f\n",fdata2);
    fclose(fp9);
    system("read");
}