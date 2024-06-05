//
//  
//
//      1、输入5个数放到数组中，然后找出其中的最大值并输出。
//

#include <stdio.h>

int main() {
    int arr[5];
    int i,max;

    printf("输入五个数字:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<5;i++){
        if(max<arr[i])
            max=arr[i];
        }
        printf("最大值:%d\n",max);
        return 0;
    }
