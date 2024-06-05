# include <stdio.h>
# include <string.h>
# include <Carbon/Carbon.h>

// 8、教材 ：p199  例 8.1743
void trans10_2_8_16(char b[], long m, int base);

int main() {
    int radix;
    long n;
    char result[100] = {0};
    printf("input radix (2, 8, 16): ");
    scanf("%d", &radix);
    printf("input a positive integer: ");
    scanf("%ld", &n);
    trans10_2_8_16(result, n, radix);
    printf("result: %s\n", result);
    return 0;
}

void trans10_2_8_16(char b[], long m, int base) {
    int i = 0;
    char temp[100] = {0};
    while (m) {
        int r = m % base;
        if (r < 10) {
            temp[i++] = r + '0';
        } else {
            temp[i++] = r - 10 + 'A';
        }
        m /= base;
    }
    int len = strlen(temp);
    for (int j = 0; j < len; j++) {
        b[j] = temp[len - j - 1];
    }
}
