#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int programs[][2], int programs_len) {
    int answer = 0;    
    int used_tv[25] = { 0, };
    
    for(int i = 0; i < programs_len; i++)
        for(int j = programs[i][0]; j < programs[i][1]; j++)
            used_tv[j]++;
    
    for(int i = 0; i < 25; i++)
        if(used_tv[i] >= 1)
            answer++;

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int programs[3][2] = {{1, 6}, {3, 5}, {2, 8}};
    int programs_len = 3;
    int ret = solution(programs, programs_len);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}