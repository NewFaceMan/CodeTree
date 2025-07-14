#include <stdio.h>
int main(int argc, char const *argv[])
{
    //입력 받을 배열 , 3배로 만들 배열 각각 선언
    int arr[3][3];
    int new_arr[3][3];

    //입력 받을 반복문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) //열의 값을 입력받을 부분
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //값을 두배로 만들 반복문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            new_arr[i][j] = 3 * arr[i][j];
        }
        
    }

    //출력을 위한 반복문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", new_arr[i][j]);
        }
        printf("\n");
    }
    
    
    


    return 0;
}
