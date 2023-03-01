#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(char* password) {
	bool answer;

	int capital_count = 0, small_count = 0, digit_count = 0;
	for(int i = 0; i < strlen(password); i++) {
		if(password[i] >= 'A' && password[i] <= 'Z')
			capital_count++;
		else if(password[i] >= 'a' && password[i] <= 'z')
			small_count++;
		else if(password[i] >= @@@ && password[i] <= @@@)
			digit_count++;
	}

	if(@@@)
		answer = true;
	else
		answer = false;

	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	char* password1 = "helloworld";
	bool ret1 = solution(password1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 ?  "true" : "false");

	char* password2 = "Hello123";
	bool ret2 = solution(password2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 ?  "true" : "false");
}