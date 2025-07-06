#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 25) {
            printf("Good\n");
            break;
        } else if (n > 25) {
            printf("Lower\n");
        } else {
            printf("Higher\n");
        }
    }
    // Please write your code here.
    return 0;
}