#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int socks[], int socks_len) {
	int answer = 0;

	int *count = (int *) malloc(sizeof(int) * 10);
	memset(count, 0, sizeof(int) * 10);

	for(int i = 0; i < socks_len; i++)
		count[socks[i]]++;

	for(int i = 0; i < 10; i++)
		answer += (count[i] % 2);

	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
	int socks[] = {1, 2, 1, 3, 2, 1};
	int socks_len = 6;
	int ret = solution(socks, socks_len);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}