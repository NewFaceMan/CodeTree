#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    bool satisfied = false; //기본적으로 소수라고 판단
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            satisfied = true; //소수가 아님
        }
    }

    if (satisfied == false) {
        printf("P");
    } 
    else {
        printf("C");
    }
     // Please write your code here.
    return 0;
}