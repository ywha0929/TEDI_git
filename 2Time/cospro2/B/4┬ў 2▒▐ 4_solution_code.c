#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int classes[], int classes_len, int m) {
	int count = 0;
	for(int i = 0; i < classes_len; ++i) {
		while(classes[i] > 0) {
			classes[i] -= m;
			count++;
		}
	}
	return count;
}