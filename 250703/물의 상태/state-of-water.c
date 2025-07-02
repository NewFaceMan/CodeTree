#include <stdio.h>

int main() {
    int temp;
    scanf("%d", &temp);

    if (temp < 0) {
        printf("ice");
    } 
    else if (temp >= 100) {
        printf("vapor");
    } else {
        printf("water");
    }
    // Please write your code here.
    return 0;
}