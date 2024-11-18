#include <stdio.h>

int main() {
    int add_count = 0;
    int num;
    for (int i = 1; i<= 5; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            add_count++;
        }
    }
    printf("%d", add_count);
    return 0;
}