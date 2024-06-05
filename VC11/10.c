//
//    10、教材 ：p154  例 7.16
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20]="I am a",str2[10]=" student.";
    strcat(str1, str2);
    puts(str1);
}
