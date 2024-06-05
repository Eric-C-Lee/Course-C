//
// Created by Eric on 2022/6/8.
//
//   3、教材 ：p220  例 9.3
#include <stdio.h>
#include <Carbon/Carbon.h>

struct stud_type{
    char name[20],sex;
    long num;
    int age;
};

int main(){
    struct stud_type student[3],*p;
    int i;
    char numstr[20];
    for (i=0,p=student;i<3;p++,i++){
        printf("Enter all data os student[%d]:\n",i);
        scanf("%s%ld%d%c",p->name,&p->num,&p->age,&p->sex);
    }
    for(i=0,p=student;p<student+3;p++,i++)
        printf("%3d%-20s%8ld%6d%3c\n",i,p->name,p->num,p->age,p->sex);
}