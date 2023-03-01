#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;

    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };
    int i, j, k;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            int is_danger = 1;

            for(k = 0; k < 4; k++) {
                if(0 <= i+dx[k] && i+dx[k] < 4 && 0 <= j+dy[k] && j+dy[k] < 4) {
                    if(height[i+dx[k]][j+dy[k]] <= height[i][j])
                        is_danger = 0;
                }
            }
            
        if(is_danger == 1)
            count++;
        }
    }

    return count;
}