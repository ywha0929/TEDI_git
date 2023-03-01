#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
    int answer = 0;
    
    int max = 0;
    int min = 100;
    int sum = 0;
    
    int i;
    for(i = 0; i < scores_len; ++i) {
        if(max < scores[i])
            max = scores[i];
        if(min > scores[i])
            min = scores[i];
        
        sum = sum + scores[i];
    }
    
    sum = sum - (max + min);
    answer = sum / (scores_len - 2);
    
    return answer;
}