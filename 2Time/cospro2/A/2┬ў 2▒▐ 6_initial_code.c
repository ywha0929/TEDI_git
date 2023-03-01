#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int floors[], int floors_len) {
    int dist = 0;
    for(int i = @@@; @@@; ++i){
        if(@@@)
            dist += floors[i] - floors[i-1];
        else
            dist += floors[i-1] - floors[i];
    }
    return dist;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int floors[5] = {1, 2, 5, 4, 2};
    int floors_len = 5;
    int ret = solution(floors, floors_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}