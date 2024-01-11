#include <stdio.h>
#include <limits.h>

#define MAX_LEN 1000005

int arr[MAX_LEN];
int N;

int get_min();
int get_max();

int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    printf("%d %d\n", get_min(arr, N), get_max(arr, N));
}

int get_min() {
    int min = INT_MAX;
    for(int i=0; i<N; i++) 
        if(arr[i] < min) min = arr[i];
    return min;
}

int get_max() {
    int max = INT_MIN;
    for(int i=0; i<N; i++) 
        if(arr[i] > max) max = arr[i];
    return max;
}