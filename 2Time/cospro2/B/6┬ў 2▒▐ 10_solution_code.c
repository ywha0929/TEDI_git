#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;
    int i;

    for(i = 0; i < boxes_len; i++)
    	if(boxes[i] < weight * 9 / 10 || boxes[i] > weight * 11 / 10)
    		answer++;
    	
    return answer;
}