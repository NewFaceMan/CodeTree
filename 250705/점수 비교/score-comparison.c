#include <stdio.h>

int main() {
    int A_english_score, A_math_score;
    int B_english_score, B_math_score;
    scanf("%d %d", &A_math_score, &A_english_score);
    scanf("%d %d", &B_math_score, &B_english_score);

    if ((A_math_score > B_math_score) && (A_english_score > B_english_score)) {
        printf("%d", 1);
    }
    else 
        printf("%d", 0);
    // Please write your code here.
    return 0;
}