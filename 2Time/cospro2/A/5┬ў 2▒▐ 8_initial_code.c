#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int usage) {
    int answer = 0;
    
    if(usage > 30)
        answer = 20 * 430 + 10 * 570 + (usage - 20) * 840;
    else if(usage > 20)
        answer = 20 * 430 + (usage - 20) * 570;
    else
        answer = usage * 430;
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
    int usage = 35;
    int ret = solution(usage);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}