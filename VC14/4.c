//
// Created by Eric on 2022/6/8.
//
//   4、教材 ：p222  例 9.5
#include <stdio.h>
#include <Carbon/Carbon.h>
#include <string.h>

struct stu{
    long num;
    char name[20];
    float score[3];
};
int main(){
    void print(struct stu *p);
    struct stu s;
    s.num=3021210;
    strcpy(s.name,"Li Dong");
    s.score[0]=67.5;
    s.score[1]=89;
    s.score[2]=78.6;
    print(&s);
    system("read");
}
void print(struct stu *p){
    printf("%ld\n%s\n",p->num,p->name);
    printf("%f\n%f\n%f\n",p->score[0],p->score[1],p->score[2]);
}