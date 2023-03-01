#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int votes[], int votes_len, int N, int K) {
    int counter[11] = {0};
    for(int i = 0; i < votes_len; ++i)
        counter[votes[i]] += 1;
    int answer = 0;
    for(int i = 0; i <= N; ++i)
        if(counter[i] == K)
            answer += 1;
    return answer;
}