#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len) {
    int answer = 0;
    
    int min = 1000;
    int i;
    
    for(i = 0; i < calorie_len; i++) {
        if(min < calorie[i])
            answer += (calorie[i] - min);
        else
            min = calorie[i];
    }
    
    return answer;
}