#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;

    for(int i = 0; i < boxes_len; i++)
    	if(@@@)
    		answer++;
    	
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int weight = 600;
    int boxes[5] = {653, 670, 533, 540, 660};
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}