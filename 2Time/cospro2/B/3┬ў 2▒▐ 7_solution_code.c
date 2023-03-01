#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int k) {
    int answer = 0;
    
    if(a < (3 * b)) answer = a / 3;
    else answer = b;
    
    int remain_a = a - (3 * answer);
    int remain_b = b - answer;
    
    int i = 0;
    k = k - (remain_a + remain_b);
    
    while(k > 0) {
        if(!(i % 4)) answer--;
        i++;
        k--;
    }
    
    return answer;
}