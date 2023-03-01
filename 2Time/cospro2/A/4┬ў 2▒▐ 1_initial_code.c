#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len) {
    int x_count = 0;
    for(int i=0; i<10; i++)
        if(schedule[i][0] == 'X')
             x_count++;

    int* answer = (int*)malloc(sizeof(int)*x_count);
    for(int i=0, j=0; i<10; i++) {
        if(schedule[i][0] == 'X') {
             answer[@@@] = @@@;
        }
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    char* schedule[] = {"O", "X", "X", "O", "O", "O", "X", "O", "X", "X"};
    int* ret = solution(schedule, 10);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 ");
    for(int i=0; i<5; i++)
        printf("%d, ", ret[i]);
    printf(" 입니다.");

}