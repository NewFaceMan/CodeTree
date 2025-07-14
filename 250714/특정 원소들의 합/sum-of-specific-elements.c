#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[4][4];
    int sum = 0;

    // 배열 요소 입력
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
        
    }

    //배열 덧셈
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (count <= i)
            {
                sum += arr[i][j];
            }
            count ++;
            
        }
        
    }
    
    printf("%d", sum);
    
    
    return 0;
}
