#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { // a>b:
        if (a < c) { // a>b, a<c -> a
            printf("%d", a);
        } else { // a>b, a>= c -> b or c가 중앙
            if (b > c) { // b>c -> b
                printf("%d", b);
            } else
                printf("%d", c); // b<c -> c 
        }
    } else {
        if(a > c) { // a<b, a>c -> a가 중앙
            printf("%d", a);
        } else { // a < b, a <= c -> b or c 중 작은 값이 중앙
            if(b > c) {
                printf("%d", c);
            } else {
                printf("%d", b);
            }
        }
    }
    // Please write your code here.
    return 0;
}