#include <stdio.h>

int main() {
    int count3 = 0, count5 = 0;
    int num;
    for(int i = 1; i <= 10; i++) {
        scanf("%d", &num);
        if(num % 3 == 0) {
            count3++;
        }
        if (num % 5 == 0) {
            count5++;
        }
    }
    printf("%d %d", count3, count5);
    return 0;
}