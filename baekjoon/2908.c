#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str1[5];
char rev1[5];
char str2[5];
char rev2[5];

int main() {
    scanf("%s", str1);
    scanf("%s", str2);

    for(int i=0; i<strlen(str1); i++) {
        rev1[strlen(str1)-i-1] = str1[i];
    }
    for(int i=0; i<strlen(str2); i++) {
        rev2[strlen(str2)-i-1] = str2[i];
    }

    int num1, num2;
    num1 = atoi(rev1);
    num2 = atoi(rev2);

    num1>num2 ? printf("%d\n", num1) : printf("%d\n", num2);
}
