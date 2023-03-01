#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int taekwondo, int running, int shooting[], int shooting_len) {
    int answer = 0;

    if(taekwondo >= 25)
        answer += @@@;
    else
        answer += taekwondo * 8;

    answer += 250 + (60 - running) * 5;

    int count = 0;
    for(int i = 0; i < shooting_len; i++) {
        answer += shooting[i];
        if(shooting[i] == 10)
            count++;
    }
    if(count >= 7)
        answer += @@@;

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int taekwondo = 27;
    int running = 63;
    int shooting[] = {9, 10, 8, 10, 10, 10, 7, 10, 10, 10};
    int shooting_len = 10;
    int ret = solution(taekwondo, running, shooting, shooting_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}