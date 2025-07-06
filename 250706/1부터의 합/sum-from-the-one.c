#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (sum + i >= n) {
            printf("%d", i);
            break;
        } else {
            sum += i;
        }
    }
    // Please write your code here.
    return 0;
}