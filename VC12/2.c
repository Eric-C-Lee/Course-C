//
// 2、教材 ：p175  例 8.1
//

#include <stdio.h>
#include <stdlib.h>
#include <Carbon/Carbon.h>

int main() {
    int a,b,*pa=&a,*pb=&b;
    int *p;
    scanf("%d%d",pa,pb);
        if (a<b){
            p = pa;
            pa = pb;
            pb = p;
            p = &a;
            a = b;
            b = *p;
        }
    printf("\n a = %d, b = %d\n" , a, b);
    printf("\n max = %d, min = %d\n", *pa, *pb);
    system("read");
}
