#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    if (money >= 3000) 
        printf("book");
    else if (money >= 1000)
        printf("mask");
    else 
        printf("no");
    // Please write your code here.
    return 0;
}