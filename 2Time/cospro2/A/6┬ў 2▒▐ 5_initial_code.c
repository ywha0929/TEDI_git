#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int money, int price, int n) {
    int answer = 0;

    int empty_bottle = answer = money / price;
    while(n <= empty_bottle) {
    	empty_bottle = empty_bottle + n;
    	answer++;
    	empty_bottle++;
    }

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
	int money1 = 8;
	int price1 = 2;
	int n1 = 4;
	int ret1 = solution(money1, price1, n1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int money2 = 6;
	int price2 = 2;
	int n2 = 2;
	int ret2 = solution(money2, price2, n2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}