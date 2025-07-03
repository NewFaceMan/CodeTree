#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (b >= a) {
        for (int i = b; i >= a; i--)
            printf("%d ", i);
    }
    // Please write your code here.
    return 0;
}