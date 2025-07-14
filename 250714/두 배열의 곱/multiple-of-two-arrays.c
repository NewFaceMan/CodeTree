#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 3행 3열의 배열 두 개 , 둘이 곱한 값을 저장하는 배열 선언
    int first_arr [3][3];
    int second_arr [3][3];
    int multi_arr [3][3];

    //first_arr 배열 값 받는 반복문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &first_arr[i][j]);
        }
        
    }

    
    //second_arr 배열 값 받는 반복문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &second_arr[i][j]);
        }
        
    }

    // first_arr * second_arr 곱하여 multi_arr에 넣는 반복문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multi_arr[i][j] = first_arr[i][j] * second_arr[i][j];
        }
    }

    //최종 출력하는 반복문
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", multi_arr[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
