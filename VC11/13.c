//
//    13、教材 ：p157  例 7.19
//

#include <stdio.h>

void bubble_sort(int arr[], int n);
void print_array(int arr[], int n);

int main(void) {
    int m;
    printf("请输入要排序的元素个数：");
    scanf("%d", &m);
    int arr[m];
    printf("请输入%d个元素：", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, m);
    printf("排序后的数组：");
    print_array(arr, m);
    return 0;
}

void bubble_sort(int arr[], int n) {
    int flag = 1;
    for (int i = 0; i < n - 1 && flag; i++) {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换arr[j]和arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
