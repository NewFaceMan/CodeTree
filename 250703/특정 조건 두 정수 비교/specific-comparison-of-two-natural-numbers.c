#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("1");
    } else {
        printf("0\n");
    }
    if (a == b) {
        printf(" 1");
    } else {
        printf(" 0");
    }
    // Please write your code here.
    return 0;
}