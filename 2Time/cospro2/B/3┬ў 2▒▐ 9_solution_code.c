#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int day, int numbers[], int numbers_len) {
    int count = 0;
    for(int i = 0; i < numbers_len; ++i)
    	if(numbers[i]%2 == day%2)
    		count++;
    return count;
}