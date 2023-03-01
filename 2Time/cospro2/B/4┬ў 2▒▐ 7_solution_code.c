#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) {
    int* answer;
    answer=(int*)malloc(sizeof(int)*2);
   int min =100, max=0;
    for(int i =0; i<final_scores_len;i++){
            int diff = final_scores[i]-mid_scores[i];
            min = diff < min ? diff:min;
            max = diff > max ? diff:max;
    }
    answer[0] = max;
    answer[1] = min;
    return answer;
}