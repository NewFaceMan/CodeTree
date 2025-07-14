#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 첫 번째 줄에 격자의 행의 개수 N과, 열의 개수 M이 공백을 두고 주어집니다.
    int row, colum;
    scanf("%d %d", &row, &colum);

    // 배열 선언
    int first_arr [row][colum];
    int second_arr [row][colum];
    int result_arr [row][colum];

    // first_arr 값 넣는 반복문
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &first_arr[i][j]);
        }
        
    }
    // second_arr 값 넣는 반복문
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &second_arr[i][j]);
        }
        
    }

    //주어진 두 격자에서 같은 위치에 존재하는 수의 값이 같다면 0, 그렇지 않다면 1을 판단하는 반복문
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (first_arr[i][j] == second_arr[i][j])
            {
                result_arr[i][j] = 0;
            } else
            {
                result_arr[i][j] = 1;
            }
        }
    }

    //출력하는 반복문
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d ", result_arr[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
