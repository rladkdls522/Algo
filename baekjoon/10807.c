#include<stdio.h>

int main() {
    int N,v,arr[105],cnt=0;
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);

    for(int i=0;i<N;i++){
       if(arr[i]==v) cnt++; 
    }

    printf("%d", cnt);


}