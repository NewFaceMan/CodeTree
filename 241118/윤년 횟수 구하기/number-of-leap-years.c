#include <stdio.h>

int main() {
    int n;
    int leap_year_count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            if (i % 100 == 0 && i % 400 != 0) {
            continue;
        }   leap_year_count++;
        } 
    }
    printf("%d", leap_year_count);
    return 0;
}