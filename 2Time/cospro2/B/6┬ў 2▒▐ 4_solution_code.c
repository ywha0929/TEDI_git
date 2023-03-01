#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* cards[][2], int cards_len) {
    int answer = 0;

    int *count = (int *) malloc(sizeof(int) * 3);
    memset(count, 0, sizeof(int) * 3);
    for(int i = 0; i < cards_len; i++) {
    	if(strcmp(cards[i][0], "black") == 0)
    		count[0]++;
    	else if(strcmp(cards[i][0], "blue") == 0)
    		count[1]++;
    	else if(strcmp(cards[i][0], "red") == 0)
    		count[2]++;
    	answer += atoi(cards[i][1]);
    }

    if(count[0] == 3 || count[1] == 3 || count[2] == 3)
    	answer *= 3;
    else if(count[0] == 2 || count[1] == 2 || count[2] == 2)
    	answer *= 2;
    
    return answer;
}