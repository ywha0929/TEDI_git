#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int day, int numbers[], int numbers_len) {
    int count = 0;
    for(int i = 0; i < numbers_len; i++)
    	if(numbers[i]%2 != day%2)
    		count++;
    return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int day = 17;
    int numbers[] = {3285, 1724, 4438, 2988, 3131, 2998};
    int numbers_len = 6;
    int ret = solution(day, numbers, numbers_len);
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}