#include<stdio.h>

int main() {
    int N,i;
    int arr[1000005];
    scanf("%d", &N);

    for(i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0], min=arr[0];
    for(int j=0;j<N;j++){
        if(arr[j]<min) 
            min=arr[j];
        if(arr[j]>max) 
            max=arr[j];
    }

        printf("%d %d", min, max);

    }