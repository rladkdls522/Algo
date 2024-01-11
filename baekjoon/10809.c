#include<stdio.h>
#include<string.h>

int arr[26];

int main() {
    char str[105];
    scanf("%s", str);
    for(int i=0; i<26; i++) arr[i] = -1;

    for(int i=0; i<strlen(str); i++) {
        if(arr[str[i] - 'a'] == -1) arr[str[i] - 'a'] = i;
    }

    for(int i=0; i<26; i++) printf("%d ", arr[i]);
    printf("\n");    
}