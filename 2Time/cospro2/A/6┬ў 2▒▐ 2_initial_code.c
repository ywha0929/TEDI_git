#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int papers[], int papers_len, int K) {
    int length = papers_len;
    for(int i = 0; i < papers_len; i++){
    	K -= papers[i];
    	if(K < 0)
    		length = i;
    }
    return length;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
	int papers1[] = {2, 4, 3, 2, 1};
	int papers_len1 = 5;
	int K1 = 10;
	int ret1 = solution(papers1, papers_len1, K1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int papers2[] = {2, 4, 3, 2, 1};
	int papers_len2 = 5;
	int K2 = 14;
	int ret2 = solution(papers2, papers_len2, K2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}