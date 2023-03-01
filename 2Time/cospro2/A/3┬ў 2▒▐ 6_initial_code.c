#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int tile_length) {
    char* answer = (char*) malloc(sizeof(char) * (tile_length+1) );
    char com[6] = {'R','R','R','G','G','B'};
    if(tile_length%6 == 1 || tile_length%6 == 2 || @@@)
        strcpy(answer, "-1");
    else{
        for(int i = 0; i < tile_length; i++)
            answer[i] = com[i%6];
        answer[tile_length]='\0';
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int tile_length1 = 11;
    char* ret1 = solution(tile_length1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);
    
    int tile_length2 = 16;
    char* ret2 = solution(tile_length2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}