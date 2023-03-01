#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
    int* size_counter = (int*)malloc(sizeof(int)*6);
    for(int i = 0; i < 6; ++i)
        size_counter[i] = 0;
    for(int i = 0; i < shirt_size_len; ++i) {
        if(strcmp(shirt_size[i],"XS") == 0)
            size_counter[0]++;
        else if(strcmp(shirt_size[i],"S") == 0)
            size_counter[1]++;
        else if(strcmp(shirt_size[i],"M") == 0)
            size_counter[2]++;
        else if(strcmp(shirt_size[i],"L") == 0)
            size_counter[3]++;
        else if(strcmp(shirt_size[i],"XL") == 0)
            size_counter[4]++;
        else if(strcmp(shirt_size[i],"XXL") == 0)
            size_counter[5]++;
    }
    return size_counter;
}