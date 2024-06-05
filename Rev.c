//
// Created by Eric on 2022/6/11.
//
// C语言期末上机题目 第一部分
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// 1、编程求1+2+3+4+……+100
//int main(){
//    int i=1,sum=0;
//    for(i=0;i<=100;i++){
//        sum+=i;
//    }
//    printf("%d",sum);
//}

// 2、编程求1+3+5+7……+99
//int main(){
//    int i=1,sum=0;
//    for(i=0;i<=100;i+=2){
//        sum+=i;
//    }
//    printf("%d",sum);
//}

// 3、输出1到100之间到所有奇数
//int main(){
//    int i=1;
//    for(i=0;i<100;i++){
//        if(i%2!=0){
//            printf("%d\t",i);
//        }
//    }
//}

// 4、求一个整数各位数字之和
//int main(){
//    int i,sum=0;
//    printf("输入:");
//    scanf("%d",&i);
//    while(i!=0){
//        sum+=i%10;
//        i/=10;
//    }
//    printf("和为:%d",sum);
//}

// 5、用循环求一个数的阶乘
//int main(){
//    int i,jc=1;
//    printf("输入这个数：");
//    scanf("%d",&i);
//    for(i=i;i>0;i--){
//        jc *= i;
//    }
//    printf("阶乘为:%d",jc);
//}

// 6、用递归方法求一个数的阶乘
//int fact(int i){
//    if(i==0||i==1){
//        return 1;
//    }else{
//        return i* fact(i-1);
//    }
//}
//
//int main(){
//    int i;
//    printf("输入这个数:");
//    scanf("%d",&i);
//    printf("阶乘为:%d",fact(i));
//}

// 7、判断一个整数是否为偶数
//int main(){
//    int i;
//    printf("输入这个数:");
//    scanf("%d",&i);
//    if(i%2==0){
//        printf("这是偶数");
//    }else{
//        printf("这不是");
//    }
//}

// 8、判断一个年份是否为闰年
//int main(){
//    int year;
//    printf("输入年份:");
//    scanf("%d",&year);
//    if(year%4==0 &&year%100!=0 || year%400==0){
//        printf("%d是闰年",year);
//    }else{
//        printf("%d不是",year);
//    }
//
//}

// 9、求一个数的绝对值
//int main(){
//    int i;
//    printf("输入数字：");
//    scanf("%d",&i);
//    if(i>0){
//        printf("绝对值为：%d",i);
//    }else if(i==0){
//        printf("绝对值为0");
//    }else if(i<0){
//        printf("绝对值为：%d",-i);
//    }else{
//        printf("错误");
//    }
//}

// 10、把一个大写字母转换成小写字母
//int main(){
//    char ch;
//    printf("输入:");
//    scanf("%c",&ch);
//    if(ch>='A' && ch<='Z'){
//        ch +=32;
//        printf("%c",ch);
//    }
//}

//  11、从键盘上输入一串字符，将其小写字母转换成大写字母后输出
//int main(){
//    char ch;
//    printf("输入“");
//    scanf("%c",&ch);
//    if(ch >='a' && ch <='z'){
//        ch-=32;
//        printf("%c",ch);
//    }
//}

// 12、判断一个正整数是否质数
//int main(){
//    int i,j;
//    printf("input");
//    scanf("%d",&i);
//    while(i>1){
//        for(j=2;j<i;j++){
//            if(i%j!=0){
//                printf("yes");
//                break;
//            }else{
//                printf("not");
//                break;
//            }
//        } break;
//    }
//
//}

// 13、求两个数的较小值
//int main(){
//    int a,b,min;
//    printf("input:");
//    scanf("%d%d",&a,&b);
//    min=a<b?a:b;
//    printf("min:%d",min);
//}

// 14、输入10个整数，把他们保存在一个一维数组中，然后倒叙输出
//int main(){
//    int arr[10],i;
//    printf("in:");
//    for(i=0;i<10;i++){
//        scanf("%d",&arr[i]);
//    }
//    printf("it:");
//    for(i=9;i>=0;i--){
//        printf("%d\t",arr[i]);
//    }
//
//}

// 15、输出1到1000中不是3的倍数的整数
//int main(){
//    int i;
//    for(i=1;i<=1000;i++){
//        if(i%3!=0){
//            printf("%d\t",i);
//        }
//    }
//}

// 16、输出1到……能被3或5……
//int main(){
//    int i;
//    for(i=1;i<=1000;i++){
//        if(i%3==0||i%5==0){
//            printf("%d\t",i);
//        }
//    }
//}

//第二部分
//1.编写函数求较小值，并在主函数调用，求三个数；
//int min(int a,int b){
//    return a<b?a:b;
//}
//int main(){
//    int a,b,c,temp;
//    printf("input:");
//    scanf("%d%d%d",&a,&b,&c);
//    temp=min(a,b);
//    temp=min(temp,c);
//    printf("min:%d",temp);
//}

//2.求2到1000之间到质数，最好把判断质数写成函数
//int zs(int i){
//    if(i>1){
//        int j;
//        for(j=2;j<i;j++){
//            if(i%j!=0){
//                return 1;
//            }else{
//                return 0;
//            }
//        }
//    }
//}
//int main(){
//    int l;
//    for(l=2;l<=1000;l++){
//        if(zs(l)){
//            printf("%d\t",l);
//        }
//    }
//}

// 3.求100～1000之间的水仙花数，把判断水仙花编写为函数
// 水仙花：一个三位数，各位数字的立方和等于其自身的
//int isT(int i){
//    int temp=i;
//    int sum=0;
//    while(temp>0){
//        int j=temp%10;
//        sum+=j*j*j;
//        temp/=10;
//    }return(sum==i);
//}
//int main(){
//    int i;
//    for(i=100;i<1000;i++){
//        if(isT(i)){
//            printf("%d\t",i);
//        }
//    }
//}

//4.求前20项斐波那契数列： 1 1 2 3 5 8……
//int main(){
//    int f[20]={1,1};
//    int i;
//    for(i=2;i<20;i++){
//        f[i]=f[i-1]+f[i-2];
//    }
//    for(i=0;i<20;i++){
//        printf("%d\t",f[i]);
//    }
//}

//5.求1+(1+2)+(1+2+3)+……+(1+2+……+100)
//int main(){
//    int sum=0;
//    for(int i=1;i<=100;i++){
//        int sub_sum=0;
//        for(int j=1;j<=i;j++){
//            sub_sum+=j;
//        }
//        sum+=sub_sum;
//    }
//    printf("sum:%d",sum);
//}

//6.求1+(1+3)+(1+3+5)...+(1+3+.....+99)
//int main(){
//    int sum=0;
//    for(int i=1;i<=99;i+=2){
//        int sub_sum=0;
//        for(int j=1;j<=i;j+=2){
//            sub_sum+=j;
//        }
//        sum+=sub_sum;
//    }
//    printf("sum:%d",sum);
//}

//7.求一个数的逆序数
//int main(){
//    int num,bnum=0;
//    printf("input:");
//    scanf("%d",&num);
//    while(num>0){
//        int temp=num%10;
//        bnum=bnum*10+temp;
//        num/=10;
//    }
//    printf("rev:%d",bnum);
//}

//8.判断一个数是否为回文数
//int main(){
//    int n;
//    int num;
//    int tesint=0;
//    printf("input a number:");
//    scanf("%d",&n);
//    num=n;
//    while(num>0){
//        int temp=num%10;
//        tesint=tesint*10+temp;
//        num/=10;
//    }
//    if(n==tesint){
//        printf("%d is a HuiWen Numb",n);
//    }else{
//        printf("%d is not a HuiWen Numb",n);
//    }
//}

//9.通过指针型函数参数交换主调函数的两个变量的值；
//void swap(int *x,int *y){
//    int temp=*x;
//    *x=*y;
//    *y=temp;
//}
//int main(){
//    int a=3,b=5;
//    printf("Before:a=%d,b=%d\n",a,b);
//    swap(&a,&b);
//    printf("After:a=%d,b=%d",a,b);
//}

//10.求两个整数的最大公约数
//int 公约数(int a,int b){
//    if(b==0){
//        return a;
//    }else{
//        return 公约数(b,a%b);
//    }
//}
//int main(){
//    int x,y;
//    printf("input 2 num:");
//    scanf("%d %d",&x,&y);
//    int result=公约数(x,y);
//    printf("公约数:%d",result);
//}

//11.求e=1+1/1!+1/2!+1/3!+...+1/10!
//double fac(int n){
//    double result=1.0;
//    for(int i=1;i<=n;i++){
//        result*=i;
//    }
//    return result;
//}
//int main(){
//    double e=1.0;
//    for(int i=1;i<=10;i++){
//        e+=1.0/fac(i);
//    }
//    printf("%lf",e);
//}

//12.某个数，与3的差是5的倍数，与3的和是6的倍数，求最小的10个这样的数
//int main(){
//    int count=0;
//    for(int i=1;count<10;i++){
//        int a=i-3;
//        int b=i+3;
//        if(a%5==0&&b%6==0){
//            printf("%d ",i);
//            count++;
//        }
//    }
//}

//13.父亲26，儿子4岁，问多少年后父亲的年是儿子2倍
//int main(){
//    int i;
//    for(i=1;i<100;i++){
//        int x=26+i;
//        int y=4+i;
//        if(x==2*y){
//            printf("%d",i);
//            break;
//        }
//    }
//}

//14.编写程序计算100到1000中有多少个整数其各位数字之和是7
//并把它们输出，要求把求整数各位之和编写为函数 int digit_sum(int n)
//int digit_sum(int n){
//    int sum=0;
//    int i=n;
//    while(i>0){
//        sum+=i%10;
//        i/=10;
//    }
//    return sum;
//}
//int main(){
//    int i;
//    int count=0;
//    for(i=100;i<=1000;i++){
//        if(digit_sum(i)==7){
//            printf("%d ",i);
//            count++;
//        }
//    }
//    printf("\n有%d个",count);
//}

//第三部分
//1.在一个字符串中删除指定的字符
//void remove_char(char *str,char c){
//    int i,j;
//    int len=strlen(str);
//    for(i=0,j=0;i<len;i++){
//        if(str[i]!=c){
//            str[j++]=str[i];
//        }
//    }
//    str[j]='\0';
//}
//int main(){
//    char str[100];
//    char c;
//    printf("input:");
//    scanf(" %s",str);
//    printf("remove:");
//    scanf(" %c",&c);
//    remove_char(str,c);
//    printf("after:%s",str);
//}

//2.删除一个字符串中的数字字符
//void remove_digit(char *str){
//    int i,j;
//    int len=strlen(str);
//    for(i=0,j=0;i<len;i++){
//        if(str[i]<'0'||str[i]>'9'){
//            str[j++]=str[i];
//        }
//    }
//    str[j]='\0';
//}
//int main(){
//    char str[100];
//    printf("input:");
//    scanf(" %s",str);
//    remove_digit(str);
//    printf("after:%s",str);
//}

//3.在一个一位数组中找出最大值
//int main(){
//    int arr[10]={1,9,3,5,7,10,2,13,91,81};
//    int max=arr[0];
//    for(int i=0;i<10;i++){
//        if(arr[i]>max){
//            max=arr[i];
//        }
//    }
//    printf("%d",max);
//}

//4.求一个3x4二维数组中的最小值及其行标和列标
//int main(){
//    int arr[3][4]={{9,2,3,4},
//                   {5,6,1,8},
//                   {9,10,11,12}
//    };
//    int i,j;
//    int mi,mj;
//    int min=arr[0][0];
//    for(i=0;i<3;i++){
//        for(j=0;j<4;j++){
//            if(arr[i][j]<min){
//                mi=i+1;
//                mj=j+1;
//                min=arr[i][j];
//            }
//        }
//    }
//    printf("最小的数字:%d,最小的行:%d,最小的列：%d",min,mi,mj);
//
//}

//5.求一个5x6二维数组中每一行的最大值
//int main() {
//    int arr[5][6] = {{9,    2,    3,    4,  3,  20},
//                     {5,    6,    1,    8,  10, 29},
//                     {9,    10,   11,   12, 91, 27},
//                     {1349, 270,  13,   25, 43, 29},
//                     {91,   1872, 2013, 19, 0,  5}
//    };
//    int i, j;
//    int max = arr[0][0];
//    for (i = 0; i < 5; i++) {
//        int n = i;
//        if (n > -1) {
//            for (j = 0; j < 6; j++) {
//                if (max < arr[n][j]) {
//                    max = arr[n][j];
//                }
//            }
//            printf(" 第%d行最大的值为:%d\n", n, max);
//        }
//    }
//}

//6.对10个整数进行排序（升序）
//选择法或冒泡法
//void bubble(int *arr,int len){
//    int i,j;
//    for(i=0;i<len-1;i++){
//        for(j=0;j<len-1-i;j++){
//            if(arr[j]>arr[j+1]){
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//            }
//        }
//    }
//}
//int main(){
//    int arr[10]={1,30,29,50,120,3,5,9,10,73};
//    bubble(arr,10);
//    printf("sort:\n");
//    for(int i=0;i<10;i++){
//        printf("%d ",arr[i]);
//    }
//}

//7.把一个十进制数转换成二进制的形式
//int main(){
//    int n,temp=0,dec;
//    printf("输入你的数字：");
//    scanf("%d",&n);
//    int i=n;
//    while(i>0){
//        dec=i%2;
//        temp=temp*10+dec;
//        i/=2;
//    }
//    printf("after:%d",temp);
//}

//8.在数组中逆序一个字符串
//void rev(char *str){
//    int i,j;
//    int len=strlen(str);
//    for(i=0,j=len-1;i<j;i++,j--){
//        int temp=str[i];
//        str[i]=str[j];
//        str[j]=temp;
//    }
//}
//int main(){
//    char str[100];
//    printf("input:");
//    scanf("%s",str);
//    rev(str);
//    printf("new:%s",str);
//}

//9.统计一个字符串中数字字符和字母的个数分别是多少
//int main(){
//    char str[100];
//    printf("input:");
//    scanf("%s",str);
//    int countD=0;
//    int countA=0;
//    for(int i=0;i<100;i++){
//        if(isdigit(str[i])){
//            countD++;
//        }else if(isalpha(str[i])){
//            countA++;
//        }
//    }
//    printf("数字有%d个，字母有%d个",countD,countA);
//}

//10.输入10个学生的成绩，输出成绩的平均分和所有高于平均分的分数
//int main(){
//    int grade[10],sum=0;
//    printf("录入成绩：");
//    for(int i=0;i<10;i++){
//        scanf("%d ",&grade[i]);
//    }
//    for(int j=0;j<10;j++){
//        sum+=grade[j];
//    }
//    int avg=sum/10;
//    printf("平均成:%d",avg);
//    printf("高于平均分的有：");
//    for(int k=0;k<10;k++){
//        if(grade[k]>avg){
//            printf("%d ",grade[k]);
//        }
//    }
//}

//11.输出从1开的前10个回文数
//把判断回文数编写成一个函数
//bool is_hw(int i){
//    int temp=i;
//    int rev=0;
//    while(temp!=0){
//        rev=rev*10+temp%10;
//        temp/=10;
//    }
//    return rev==i;
//}
//int main(){
//    int i;
//    int count=0;
//    for(i=1;count<=10;i++){
//        if(is_hw(i)){
//            printf("%d ",i);
//            count++;
//        }
//    }
//}

//12.输出从1开始的前10个素数
//int is_ss(int num) {
//    if(num==1){
//        return 0;
//    }else{
//        for(int i=2;i<=num/2;i++) {
//            if (num % i == 0) {
//                return 0;
//            }
//        }
//        return 1;
//    }
//}
//
//int main() {
//    int i;
//    int count = 0;
//    for (i = 1; count <= 10; i++) {
//        if (is_ss(i)) {
//            printf("%d ", i);
//            count++;
//        }
//    }
//}

//13.已知2个三位数cba和abc之和为1000,求出
//int main() {
//    int a,b,c;
//    for(a=0;a<10;a++){
//        for(b=0;b<10;b++){
//            for(c=0;c<10;c++){
//                int cba=c*100+b*10+a;
//                int abc=a*100+b*10+c;
//                if(cba>=100 && abc>=100 && abc+cba==1000){
//                    printf("这个数为:a:%d,b:%d,c:%d",a,b,c);
//                }
//            }
//        }
//    }
//}
//
//















