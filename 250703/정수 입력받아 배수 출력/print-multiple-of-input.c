#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i <= N*5; i += N) {
        printf("%d ", i);
    }
    // Please write your code here.
    return 0;
}