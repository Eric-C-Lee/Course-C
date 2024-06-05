//
// Created by Eric on 2022/6/8.
//
//   2、教材 ：p219  例 9.2
#include <stdio.h>
#include <Carbon/Carbon.h>

int main(){
    struct student{
        char num[8],name[20],sex;
        float score;
    };
    struct student *p;
    struct student stu1;
    p=&stu1;
    strcpy(stu1.num,"3021210");
    strcpy(stu1.name,"Li Lin");
    stu1.sex='M';
    stu1.score=91.5;
    printf("No:%s\nName:%s\nSex:%c\nScore:%f\n",stu1.num,stu1.name,stu1.sex,stu1.score);
    printf("No:%s\nName:%s\nSex:%c\nScore:%f\n",(*p).num,(*p).name,(*p).sex,(*p).score);
    system("read");
}