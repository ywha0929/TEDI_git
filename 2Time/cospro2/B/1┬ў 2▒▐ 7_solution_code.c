#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++) 
		if (650 <= scores[i] && scores[i] < 800) 
			count += 1;
	return count;
}