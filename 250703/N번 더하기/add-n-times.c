#include <stdio.h>

int main() {
    int A, N;
    scanf("%d %d", &A, &N);

    for (int i = 0; i < N; i++) {
        A += N;
        printf("%d\n", A);
    }
    // Please write your code here.
    return 0;
}