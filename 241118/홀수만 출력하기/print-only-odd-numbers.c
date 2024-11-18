#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int num;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &num);
        
        if(i % 2 != 0 && i % 3 == 0) {
            printf("%d\n", i);
        } 
    }
    return 0;
}