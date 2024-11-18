#include <stdio.h>

int main() {
    int classroom_count = 0;
    int hallway_count = 0;
    int restroom_count = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 12 == 0) {
            restroom_count++;
        } else if(i % 2 == 0 && i % 3 == 0) {
            hallway_count++;
        } else if (i % 3 == 0) {
            hallway_count++;
        } else if(i % 2 == 0) {
            classroom_count++;
        }
        }
        printf("%d %d %d", classroom_count, hallway_count, restroom_count);
        return 0;
    }
