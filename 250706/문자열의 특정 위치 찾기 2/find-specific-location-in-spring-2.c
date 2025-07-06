#include <stdio.h>

int main() {
    char fruits[5][20] = {
        "apple",
        "banana",
        "grape",
        "blueberry",
        "orange",
    };
    char alphabet;
    int cnt = 0;
    scanf("%c", &alphabet);
    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < 4; j++) {
            if (fruits[i][j] == alphabet) {
                printf("%s\n", fruits[i]);
                cnt ++;
            }
        }
    }
    printf("%d", cnt);
    // Please write your code here.
    return 0;
}