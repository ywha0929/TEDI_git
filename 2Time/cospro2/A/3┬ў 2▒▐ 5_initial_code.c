#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int member_age[], int member_age_len, char* transportation) {
	int adult_expense = 0;
	int child_expense = 0;

	if(!strcmp(transportation, "Bus")) {
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if(!strcmp(transportation, "Ship")) {
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if(!strcmp(transportation, "Airplane")) {
		adult_expense = 70000;
		child_expense = 45000;
	}

	if(member_age_len >= 10) {
		adult_expense = @@@;
		child_expense = @@@;
	}
	int total_expenses = 0;
	for(int i = 0; i < member_age_len; i++) {
		if(@@@)
			total_expenses += adult_expense;
		else
			total_expenses += child_expense;
	}

	return total_expenses;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int member_age1[5] = {13, 33, 45, 11, 20};
    int member_age1_len = 5;
    char* transportations1 = "Bus";
    int ret1 = solution(member_age1, member_age1_len, transportations1);
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);
    
    int member_age2[10] = {25, 11, 27, 56, 7, 19, 52, 31, 77, 8};
    int member_age2_len = 10;
    char* transportations2 = "Ship";
    int ret2 = solution(member_age2, member_age2_len, transportations2);
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}