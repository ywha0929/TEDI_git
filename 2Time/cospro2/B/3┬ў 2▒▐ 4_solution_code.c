#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(char* words[], int words_len, char* word) {
    int count = 0;
    
    int i, j;
    for(i = 0; i < words_len; i++) {
        for(j = 0; j < strlen(words[i]); j++) {
            if(words[i][j] != word[j])
                count++;
        }
    }
    return count;
}