#include <stdio.h>

int main() {
    int numbers[100];
    int three_cnt = 0, five_cnt = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 3 == 0) {
            three_cnt ++;
        }
        if (numbers[i] % 5 == 0) {
            five_cnt ++;
        }
    }

    printf("%d %d", three_cnt, five_cnt);
    // Please write your code here.
    return 0;
}