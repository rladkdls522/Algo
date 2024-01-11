#include <stdio.h>

int main() {
    int N, k;
    scanf("%d", &N);

    for(k=1; k<10; k++) {
        printf("%d * %d = %d\n", N, k, (N*k));
    }

    return 0;
}