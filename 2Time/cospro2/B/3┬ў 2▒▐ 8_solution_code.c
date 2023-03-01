#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int tv[][2], int tv_len) {
    int answer = 0;
    
    int used_tv[25] = { 0, };
    int i, j;
    
    for(i = 0; i < tv_len; i++) {
        for(j = tv[i][0]; j < tv[i][1]; j++)
            used_tv[j]++;
    }
    
    for(i = 0; i < 25; i++) {
        if(used_tv[i] >= 2) answer++;
    }
    return answer;
}