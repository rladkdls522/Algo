#include<stdio.h>

int main() {
    int N,i,max=0,arr[1005];
    float avg=0;
    scanf("%d", &N);

    for(i=0;i<N;i++){
        scanf("%d", &arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
    }

    for(i=0;i<N;i++){
        avg += (float)arr[i] / max * 100;
    }

    printf("%f", avg / N);

    return 0;
    
    }