#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char* grade) {
	int answer = 0;
	if (grade == "S")
		answer = price * 0.95;
	if (grade == "G")
		answer = price * 0.9;
	if (grade == "V")
		answer = price * 0.85;
	return answer;
}