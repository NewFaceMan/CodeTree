// 정수 a, b가 주어지면, a이상 b이하에 c의 배수가 단 하나라도 있는지 판단하는 프로그램을 작성해보세요.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int c_cnt = 0;
    for (int i = a; i <= b; i++)
    {
       if (i % c == 0)
       {
        c_cnt ++;
       }
    }

    if (c_cnt > 0)
    {
        printf("YES");
    } else
    {
        printf("NO");
    }
    
    
    return 0;
}
