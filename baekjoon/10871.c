#include<stdio.h>

int main() {
    int N, X, i;
    int arr[10005];

    scanf("%d %d", &N, &X);
    for(i=0;i<N;i++){
        scanf("%d", &arr[i]);
        if(arr[i] < X) printf("%d ", arr[i]);
    }



}