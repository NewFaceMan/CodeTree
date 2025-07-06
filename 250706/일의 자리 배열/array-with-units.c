#include <stdio.h>

int main() {
    int a, b;
    int arr[10];
    scanf("%d %d", &a, &b);
    arr[0] = a;
    arr[1] = b;

    for (int i = 2; i < 12; i++) {
        arr[i] = (arr[i-2] + arr[i-1]) % 10;
        printf("%d ", arr[i-2]);
    }




    // Please write your code here.
    return 0;
}