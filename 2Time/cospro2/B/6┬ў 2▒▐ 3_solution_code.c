#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int people[], int people_len) {
	int *answer = (int *) malloc(sizeof(int) * 4);
	memset(answer, 0, sizeof(int) * 4);

	for(int i = 0; i < people_len; i++) 
		if(people[i] < 95)
			answer[0]++;
		else if(people[i] >= 95 && people[i] < 100)
			answer[1]++;
		else if(people[i] >= 100 && people[i] < 105)
			answer[2]++;
		else if(people[i] >= 105)
			answer[3]++;

	return answer;
}