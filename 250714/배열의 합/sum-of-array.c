#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[4][4]; //4행 4열 배열 생성
    int sum[4]; //각 줄의 합을 저장하는 배열 생성

    //각 행, 열에 값 대입
    for (int i = 0; i < 4; i++)
    {
        int total = 0; //줄의 합 저장하는 지역 변수 생성
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
            total += arr [i][j]; // i행 마다 각 열의 값을 total에 저장
        }
        sum[i] = total; // sum 배열에 각 행마다의 열의 합을 저장함.
    }
    
    //출력
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", sum[i]);
    }
    

    return 0;
}
