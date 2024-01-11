#include<stdio.h>
#include<string.h>

int main() {
    char s[1001];
    int T;
    // 첫째 줄에 TestCase 입력
    scanf("%d", &T);

    // T번 반복해서
    for(int i=0; i<T; i++) {
        // 문자열을 입력 받고
        scanf("%s", s);
        // 첫글자, 끝글자 출력
        printf("%c%c\n", s[0], s[strlen(s)-1]);
    }
} 
        