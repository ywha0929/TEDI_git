#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int floors[], int floors_len) {
    int dist = 0;
    for(int i = 1; i < floors_len; ++i){
        if(floors[i] > floors[i-1])
            dist += floors[i] - floors[i-1];
        else
            dist += floors[i-1] - floors[i];
    }
    return dist;
}