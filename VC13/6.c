# include <stdio.h>
# include <string.h>
#define MAX_LEN 50
#define MAX_BOOKS 4

//6、教材 ：p195  例 8.15
void sort(char *arr[], int n) {
    int i, j, k;
    char *temp;
    for (i = 0; i < n - 1; i++) {
        k = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[k]) < 0) {
                k = j;
            }
        }
        if (k != i) {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }
}

int main() {
    char *books[MAX_BOOKS] = {"programming in ansi c", "basic", "visual c++ programming", "trubo c"};
    int i;
    sort(books, MAX_BOOKS);
    for (i = 0; i < MAX_BOOKS; i++) {
        printf("%s\n", books[i]);
    }
    return 0;
}
