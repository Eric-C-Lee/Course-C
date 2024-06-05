//
// Created by Eric on 2022/6/8.
//
//     5、教材 ：p224  上面的例题
#include <stdio.h>
struct date{
    int day,month,year,year_day;
};
int day_tb1[][12]={
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
struct date day_of_year(struct date d){
    int i,leap;
    d.year_day=d.day;
    leap=(d.year%4==0&&d.year%100)||(d.year%400==0);
    for(i=0;i<d.month-1;i++)
        d.year_day+=day_tb1[leap][i];
    return d;
}
int main() {
    struct date my_date = {8, 6, 2022, 0};
    my_date = day_of_year(my_date);
    printf("Year day of the date is: %d\n", my_date.year_day);
    return 0;
}