#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int time_table[], int time_table_len, int n) {
    int answer = 0;

    int *arr = (int*) malloc(sizeof(int) * n);
    memset(arr, 0, sizeof(int) * n);

    for(int i = 0; i < time_table_len; i++)
        arr[i % n] += time_table[i];

    for(int i = 0; i < n; i++)
        answer = answer > arr[i] ? answer : arr[i];

    return answer;
}