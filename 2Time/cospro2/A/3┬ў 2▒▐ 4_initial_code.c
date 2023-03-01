// 다음과 같이 include를 사용할 수 있습니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* words[], int words_len, char* word) {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    char* words[3] = {"CODE", "COED", "CDEO"};
    int words_len = 3;
    char* word = "CODE";
    int ret = solution(words, words_len, word);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}