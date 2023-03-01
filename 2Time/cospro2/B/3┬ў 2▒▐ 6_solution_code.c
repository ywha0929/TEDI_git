#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int length) {
    char* answer = (char*) malloc(sizeof(char) * length+1);
    char* answer1 = "-1";
    char com[6] ={'R','R','R','G','G','B'};
    if(length%6==1 || length%6==2 || length%6==4) return answer1;
    else{
        for(int i = 0; i < tile_length; i++)
            answer[i] = com[i%6];
        answer[tile_length]='\0';
    }
    return answer;
}