#include<stdio.h>

int arr[42];

int main() {
    int n;
    for(int i=0; i<10; i++) {
        scanf("%d", &n);
        arr[n % 42] = 1;
    }
    int cnt = 0;
    for(int i=0; i<42; i++) {
        if(arr[i] == 1) cnt++;
    }

    printf("%d\n", cnt);
}