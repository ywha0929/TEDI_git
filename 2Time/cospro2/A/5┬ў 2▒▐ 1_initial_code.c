#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int ladders[][2], int ladders_len, int win) {
    int answer = 0;
    
    int player[6] = { 1, 2, 3, 4, 5, 6 };

    for(int i = 0; i < ladders_len; i++) {
        int temp = player[ladders[i][0]-1];
        @@@ = @@@;
        @@@ = temp;
    }
    
    answer = player[win-1];
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int ladders[5][2] = {{1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6}};
    int ladders_len = 5;
    int win = 3;
    int ret = solution(ladders, ladders_len, win);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}