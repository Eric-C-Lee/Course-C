//
//  
//
//2、输入10个数放到数组中，然后输出比平均值大的数。
//

#include <stdio.h>

int main() {
    int arr[10];
    int avg,sum=0;
    printf("输入10个数字：");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/10;
    printf("比平均值大的有：");
    for(int i=0;i<10;i++){
        if(arr[i]>avg){
            printf("%d\n",arr[i]);
        }
    }
    
}
