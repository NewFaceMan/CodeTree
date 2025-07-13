#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //길이가 n인 직각삼각형 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}