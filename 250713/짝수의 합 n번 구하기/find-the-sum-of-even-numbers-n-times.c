#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int a, b;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        for (int j = a;j <= b;j++)
        {
            if (j % 2 == 0) {
                sum += j;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;
}
