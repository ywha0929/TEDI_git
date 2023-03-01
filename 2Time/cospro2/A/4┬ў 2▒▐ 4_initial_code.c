#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int classes[], int classes_len, int m) {
    int answer = 0;
    for(int i=0; i<classes_len; i++) {
        answer += classes[i] @@@ m;
        if (classes[i] @@@ m != 0)
            answer++;
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int classes[] = {80, 45, 33, 20};
    int m = 30;
    int ret = solution(classes, 4, m);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}