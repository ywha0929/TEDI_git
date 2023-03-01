#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int papers[], int papers_len, int K) {
    int length = papers_len;
    for(int i = 0; i < papers_len; i++){
    	K -= papers[i];
    	if(K < 0)
    		return i;
    }
    return length;
}