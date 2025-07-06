#include <stdio.h>
#include <string.h>

int main() {
    char a [20];
    char b [20];
    scanf("%s %s", a, b);
    int a_length = strlen(a);
    int b_length = strlen(b);

    if (a_length == b_length) {
        printf("same");
    } else if (a_length > b_length) {
        printf("%s %d", a, a_length);
    } else {
        printf("%s %d", b, b_length);
    }
    // Please write your code here.
    return 0;
}