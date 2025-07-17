#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) { //행
        for (int j = n; j > i; j--) {
            for (int k = n; k > i; k--) {
                printf("*");
            }
            printf(" ");
        }

        printf("\n");
    }
    // Please write your code here.
    return 0;
}