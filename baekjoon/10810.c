#include<stdio.h>

#define MAX_LEN 100

int arr[MAX_LEN];
int N,M,i,j,k;

int main() {
    scanf("%d%d", &N, &M);
    for(int index=0; index<M; index++) {
        scanf("%d%d%d", &i, &j, &k);
        for(int cur=i-1; cur<j; cur++) {
            arr[cur] = k;
        }
    }
    for(int i=0; i<N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
