#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    bool satisfied = false;
    
    if (n < 4)
    {
        satisfied = false;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            satisfied = true;
            break;
        } 
        
    }

    if (satisfied == false)
    {
        printf("N");
    }
    else
    {
        printf("C");
    }
    
    
    


    
    return 0;
}
