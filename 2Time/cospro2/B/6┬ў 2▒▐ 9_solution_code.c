#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int socks[], int socks_len) {
	int answer = 0;

	int *count = (int *) malloc(sizeof(int) * 10);
	memset(count, 0, sizeof(int) * 10);

	for(int i = 0; i < socks_len; i++)
		count[socks[i]]++;

	for(int i = 0; i < 10; i++)
		answer += (count[i] / 2);

	return answer;
}