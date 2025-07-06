#include <stdio.h>

int main() {
    int a, b;
    int temp;
    scanf("%d %d", &a, &b);

    while (a <= b) {
        if (((a * 2) || (a + 3)) > b) {
            break;
        }
        if (a % 2 == 0) {
            printf("%d ", a);
            a += 3;
        } else if (a % 2 == 1) {
            printf("%d ", a);
            a *= 2;
        }
    }
    // Please write your code here.
    return 0;
}