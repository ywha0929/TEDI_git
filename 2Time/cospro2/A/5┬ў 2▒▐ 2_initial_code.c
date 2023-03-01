#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int time_table[], int time_table_len) {
    int answer = 0;
    for(int i = time_table_len-1; i >= 0; i--) {
        if(time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int func_b(int time_table[], int class1, int class2) {
    int answer = 0;
    for(int i = class1; i < class2; i++)
        if(time_table[i] == 0)
            answer++;
    return answer;
}

int func_c(int time_table[], int time_table_len) {
    int answer = 0;
    for(int i = 0; i < time_table_len; i++) {
        if(time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int solution(int time_table[], int time_table_len) {
    int answer = 0;
    int first_class = func_@@@(@@@);
    int last_class = func_@@@(@@@);
    answer = func_@@@(@@@);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	int time_table[] = {1, 1, 0, 0, 1, 0, 1, 0, 0, 0};
	int time_table_len = 10;
	int ret = solution(time_table, time_table_len);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}