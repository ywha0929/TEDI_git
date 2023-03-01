#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int ladders[][2], int ladders_len, int win) {
    int answer = 0;
    
    int player[6] = { 1, 2, 3, 4, 5, 6 };
    
    for(int i = 0; i < ladders_len; i++) {
        int temp = player[ladders[i][0]-1];
        player[ladders[i][0]-1] = player[ladders[i][1]-1];
        player[ladders[i][1]-1] = temp;
    }
    
    answer = player[win-1];
    
    return answer;
}