#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//words_m은 words에 들어있는 문자열의 개수입니다.
char* solution(char* words[], size_t words_m) {
    char* answer = (char*)malloc(sizeof(char)*words_m*10 + 1);
    answer[0] = 0;
    for(int i = 0; i < words_m; ++i)
        if(strlen(words[i]) >= 5)
            strcat(answer, words[i]);
    if(strlen(answer) == 0)
        answer = "empty";
    return answer;
}