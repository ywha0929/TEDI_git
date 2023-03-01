#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int stuffs[], int stuffs_len) {
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for(int i = 0; i < stuffs_len; i++) {
        if(stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }

    if(small_counter < general_counter)
        answer = small_counter;
    else
        answer = general_counter;

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    int stuffs[6] = {5, 3, 4, 2, 3, 2};
    int stuffs_len = 6;
    int ret = solution(stuffs, stuffs_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}