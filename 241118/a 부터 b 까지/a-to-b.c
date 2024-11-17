#include <stdio.h>

int main() {
    int a, b;
    int num;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; ) {
        
        if(i % 2 == 0) {
            printf("%d ", i);
            i += 3;
        } else if (i % 2 == 1) {
            printf("%d ", i);
            i *= 2;
        } 
    }
    return 0;
}