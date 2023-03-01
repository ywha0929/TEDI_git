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
		else if(password[i] >= '0' && password[i] <= '9')
			digit_count++;
	}

	if(capital_count >= 1 && small_count >= 2 && digit_count >= 2)
		answer = true;
	else
		answer = false;

	return answer;
}