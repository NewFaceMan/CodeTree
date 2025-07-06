#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            continue;
        } else if (i % 5 == 0) {
            continue;
        } else {
            count++;
        }
    }
    printf("%d", count);
    // Please write your code here.
    return 0;
}