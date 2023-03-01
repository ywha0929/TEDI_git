#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(char* sentence) {
    char *str = (char *)malloc(sizeof(char) * 103);
    int len = 0;
    for(int i = 0; i < strlen(sentence); i++){
        char ch = sentence[i];
        if(ch != ' ' && ch != '.') str[len++] = ch;
    }
    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - 1 - i]) return false;
    }
    return true;
}
