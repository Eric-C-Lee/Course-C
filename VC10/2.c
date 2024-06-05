//
//  
//
//  p136  例 7.2
//

#include <stdio.h>
#include <Carbon/Carbon.h>

int main() {
    int i, a[5] = {8, 8, 2, 4, 260}, b[5] = {0}, c[4] = {1, 2, 3, 4};
    printf("\nArray a:");
    for (i = 0; i < 5; i++) printf("%6d", a[i]);
    printf("\nArray b:");
    for (i = 0; i < 5; i++) printf("%6d", b[i]);
    printf("\nArray c:");
    for (i = 0; i < 4; i++) printf("%6d", c[i]);
    printf("\n\n");
    system("read");
    return 0;
}
