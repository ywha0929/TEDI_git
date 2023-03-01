#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len) {
    int min_cal = 0;
    int answer = 0;
    for(int i=0; i<calorie_len; i++) {
        if(calorie[i] > min_cal)
            answer += calorie[i] - min_cal;
        else
            min_cal = calorie[i];
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    int calorie[] = {713, 665, 873, 500, 751};
    int ret = solution(calorie, 5);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}