#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int stuffs[], int stuffs_len) {
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for(int i = 0; i < stuffs_len; i++) {
        if(stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }

    if(small_counter > general_counter)
        answer = small_counter;
    else
        answer = general_counter;

    return answer;
}