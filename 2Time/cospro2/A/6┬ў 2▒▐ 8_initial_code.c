#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int number1, int number2) {
	int ret = 0;

	if(number1 > number2)
		ret = number1 - number2;
	else
		ret = number2 - number1;

	return ret;
}

int func_b(int number) {
	int ret = 0;

	while(number != 0) {
		number = number / 10;
		ret++;
	}

	return ret;
}

int func_c(int number, int digit) {
	int ret = 0;

	for(int i = 0; i < digit; i++) {
		int temp = number % 10;
		number = number / 10;
		ret = ret * 10 + temp;
	}

	return ret;
}

int solution(int number) {
    int answer = 0;
    int digit = func_@@@(@@@);
    int convert_number = func_@@@(@@@);
    answer = func_@@@(@@@);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	int number1 = 120;
	int ret1 = solution(number1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int number2 = 23;
	int ret2 = solution(number2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}