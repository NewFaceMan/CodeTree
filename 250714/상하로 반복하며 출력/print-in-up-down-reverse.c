#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 1; i <= n; i++) //열 순서로 선회
    {
        if (i % 2 != 0) // 홀수열
        {
            for (int j = 0; j < n; j++) //행
            {
                arr[j][i-1] = j + 1; //각 행의 1열마다 j+1 대입
            }
            
        } 
        else //짝수열
        {
            for (int j = 0; j < n; j++) //거꾸로 출력, 행
            {
                arr[j][i-1] = n-j; //각 열의 짝수 행마다 n-j 대입
            }
            
        }
    }
    
    //출력
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
