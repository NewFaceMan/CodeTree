#include <stdio.h>
#include <stdbool.h>

int main() {
    int n[5];
    bool satisfied = true;
    //입력 로직
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
    }

    //검사 로직
    for (int i = 0; i < 5; i++) {
        if (n[i] % 3 != 0) {
            satisfied = false;
            break;
        }
    }

    //출력 로직
    if (satisfied == true) {
        printf("1");
    }
    else {
        printf("0");
    }
    // Please write your code here.
    return 0;
}