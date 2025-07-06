#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int n[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }
    
    for (int i = size-1; i >= 0; i--) {
        if (n[i] % 2 == 0) {
            printf("%d ", n[i]);
        } 
    }
    // Please write your code here.
    return 0;
}