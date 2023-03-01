#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return ( *(int*)b - *(int*)a );
}

int func_a(int scores[], int scores_len, int score){
    for(int rank = 0; rank < scores_len; rank++)
        if(scores[rank] == score)
            return rank + 1;
    return 0;
}

void func_b(int arr[], int arr_len){
    qsort(arr, arr_len, sizeof(int), compare);
}

int func_c(int arr[], int n){
    return arr[n];
}

int solution(int scores[], int scores_len, int n) {
    int s = func_c(scores, n);
    func_b(scores, scores_len);
    int answer = func_a(scores, scores_len, s);
    return answer;
}