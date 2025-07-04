#include <stdio.h>

int main() {
    int gender;
    int age;
    scanf("%d", &gender);
    scanf("%d", &age);

    if (age >= 19) {
        if(gender == 0) {
            printf("MAN");
        } else {
            printf("WOMAN");
        }
    } 
    else if (gender == 0) 
        printf("BOY");
    else   
        printf("GIRL");
    // Please write your code here.
    return 0;
}