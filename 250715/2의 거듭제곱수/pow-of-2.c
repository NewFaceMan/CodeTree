#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int x = 0;
    scanf("%d", &n);

    while (n > 1)
    {
        n /= 2;
        x ++;
    }
    
    printf("%d", x);    
    return 0;
}
