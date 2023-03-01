#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int votes[], int votes_len) {
    int answer = 0;
    int candidate = votes[0];
    int count = 1;
    for (int i = 1; i < votes_len; i++) {
        if (candidate == votes[i]) {
            count++;
        }
        else {
            count--;
        }
        if (count == 0) {
            candidate = votes[i];
            count = 1;
        }
    }

    int test_count = 0;
    for (int i = 0; i < votes_len; i++) {
        if (votes[i] == candidate) {
            ++test_count;
        }
    }

    if (test_count > votes_len/2) {
        answer = candidate;
    } else {
        answer = -1;
    }

    return answer;
}