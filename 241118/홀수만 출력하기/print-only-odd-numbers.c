#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // 첫 번째 줄: N 입력

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num); // 각 숫자 입력
        if (num % 6 == 3) { // 홀수이면서 3의 배수인지 간단히 확인
            printf("%d\n", num); // 조건 만족 시 출력
        }
    }
    return 0;
}