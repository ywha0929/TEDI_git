#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len, int cutline) {
    int answer = 0;
    
    for(int i = 0; i < scores_len; i++)
        if(scores[i] >= cutline)
            answer++;
    
    return answer;
}