//
//   6、教材 ：p150  例 7.12
//

#include <stdio.h>

int main(void) {
    char str[20]={"How do you do?"};
    int k;
    printf("%s",str);
    for (k=0; str[k]!=0; k++) {
        printf("%c",str[k]);
    }
}
