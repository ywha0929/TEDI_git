#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int temperature[], int temperature_len, int A, int B) {
    int answer = 0;
    for(int i = A + 1; i < B; i++) {
    	if(temperature[i] > temperature[A] && temperature[i] > temperature[B])
    		answer += 1;
    }
    return answer;
}