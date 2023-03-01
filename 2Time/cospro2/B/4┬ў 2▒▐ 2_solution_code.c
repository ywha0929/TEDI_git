#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[][3], int scores_len) {
	int pass_count = 0;
	int people_count = 0;
	int pass_score[3] = {80, 88, 70};

	for(int i = 0; i < scores_len; ++i) {
		pass_count = 0;
		for(int j = 0; j < 3; ++j) {
			if(scores[i][j] < pass_score[j]/2)
			{
				pass_count = 0;
				break;
			}
			else if(scores[i][j] >= pass_score[j])
				pass_count++;
		}
		if (pass_count >1)
			people_count++;
	}
	return people_count;
}