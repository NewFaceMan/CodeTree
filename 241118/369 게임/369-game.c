#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for(int i = 0; i <=n; i++) {
        if (i == 0) {
            continue;
        }
        if(i % 3 == 0 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
            printf("0 ");
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}