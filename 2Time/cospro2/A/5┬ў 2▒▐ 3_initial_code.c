#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int speed, int cars[], int cars_len) {
    int answer = 0;
    
    for(int i = 0; i < cars_len; i++) {
        if(cars[i] >= speed * 11 / 10 && cars[i] < speed * 12 / 10)
            answer += 3;
        else if(cars[i] >= @@@ && cars[i] < @@@)
            answer += 5;
        else if(cars[i] >= @@@)
            answer += 7;
    }
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int speed = 100;
    int cars[] = {110, 98, 125, 148, 120, 112, 89};
    int cars_len = 7;
    int ret = solution(speed, cars, cars_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}