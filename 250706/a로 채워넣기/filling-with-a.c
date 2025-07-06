#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);

    a[1] = 'a';
    a[strlen(a) -2] = 'a';
    printf("%s", a); 
    // Please write your code here.
    return 0;
}