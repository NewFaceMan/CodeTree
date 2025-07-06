#include <stdio.h>

int main() {
    int a, b, total = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if(i % 2 == 0) {
            total += i;
        }
    }
    printf("%d", total);
    // Please write your code here.
    return 0;
}