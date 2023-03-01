// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int people[], int people_len) {
    // 여기에 코드를 작성해주세요.
    int *answer = (int *) malloc(sizeof(int) * 4);
    memset(answer, 0, sizeof(int) * 4);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int people[] = {97, 102, 93, 100, 107};
    int people_len = 5;
    int *ret = solution(people, people_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < 4; i++) {
        if(i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}