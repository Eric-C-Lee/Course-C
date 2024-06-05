//
// Created by Eric on 2022/6/8.
//
//     7、教材 ：p240  例 9.7
#include "stdio.h"
#include "string.h"
int main(){
    enum colorname{
        red,yellow,blue,white,black
    };
    int color;
    for(color=red;color<=black;color++)
        switch (color) {
        case red:
            printf("red\n");
            break;
        case yellow:
            printf("yellow\n");
            break;
        case blue:
            printf("blue\n");
            break;
        case white:
            printf("white\n");
            break;
        case black:
            printf("black");
        }
}