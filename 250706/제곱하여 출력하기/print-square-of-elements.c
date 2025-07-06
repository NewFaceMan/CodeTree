#include <stdio.h>

int main() {
    int n;
    int arr[100];
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
        printf("%d ", arr[i]);
    }
    

    // Please write your code here.
    return 0;
}