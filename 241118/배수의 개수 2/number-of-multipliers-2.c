#include <stdio.h>

int main() {

    int num = 0;
    int cnt = 0;
    for(int i = 1; i <= 10; i++) {
        scanf("%d", &num);
        if(num % 2 != 0) {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}