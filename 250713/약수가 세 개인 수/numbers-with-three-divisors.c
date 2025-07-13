#include <stdio.h>
int main(int argc, char const *argv[])
{
    int start, end;
    int cnt = 0;
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            cnt ++;
        }
        

    }
    printf("%d", cnt);
    return 0;
}
