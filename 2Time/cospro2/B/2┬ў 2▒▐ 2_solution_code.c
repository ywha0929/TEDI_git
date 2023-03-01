#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int arr[], int arr_len){
    int count = 0;
    for(int i = 0; i < arr_len; ++i)
        if (arr[i] % 5 == 0)
            count += 1;
    return count;
}

char* func_b(int three, int five){
    if (three > five)
        return "three";
    else if (three < five)
        return "five";
    else
        return "same";
}

int func_c(int arr[], arr_len){
    int count = 0;
    for(int i = 0; i < arr_len; ++i)
        if (arr[i] % 3 == 0)
            count += 1;
    return count;
}

char* solution(int arr[], int arr_len) {
    int count_three = func_c(arr, arr_len);
    int count_five = func_a(arr, arr_len);
    char* answer = func_b(count_three, count_five);
    return answer;
}