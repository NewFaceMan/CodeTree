#include <stdio.h>

int main() {
    int n; //행
    int m; //열
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("* ");
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}