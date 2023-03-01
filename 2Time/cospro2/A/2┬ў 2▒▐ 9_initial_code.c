#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int votes[], int votes_len, int N, int K) {
    int counter[11] = {0};
    for(int i = 0; i < votes_len; ++i)
        counter[votes[i]] += 1;
    int answer = -1;
    for(int i = 0; i <= N; ++i)
        if(counter[i] == K)
            answer += 1;
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int votes[10] = {2, 5, 3, 4, 1, 5, 1, 5, 5, 3};
    int votes_len = 10;
    int N = 5;
    int K = 2;
    int ret = solution(votes, votes_len, N, K);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}