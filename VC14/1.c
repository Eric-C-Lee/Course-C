//
// Created by Eric on 2022/6/8.
//
//1、教材 ：p214  例 9.1
#include <stdio.h>
#include <Carbon/Carbon.h>

struct student{
    char num[8],name[20],sex,addr[40];
}a={"3021103","Jiang Linpan",'M',"123 Shaoshan Road"};

int main(){
    printf("No:%s\nName:%s\nSex:%c\nAddress:%s\n",a.num,a.name,a.sex,a.addr);
    system("read");
}