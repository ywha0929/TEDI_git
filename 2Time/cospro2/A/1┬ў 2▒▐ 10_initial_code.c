#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int data[], int data_len) {
    double total = 0;
    for(int i = 0; i < data_len; i++)
        total += data[i];
    int cnt = 0;
    double average = data_len / total;
    for(int i = 0; i < data_len; i++)
        if(data[i] <= average)
            cnt += 1;
    return cnt;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    int data1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int data_len1 = 10;
    int ret1 = solution(data1, data_len1);
    
    // Press Run button to receive output.
    printf("Solution: return value of the function is %d .\n", ret1);
    
    int data2[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
    int data_len2 = 10;
    int ret2 = solution(data2, data_len2);
    
    // Press Run button to receive output.
    printf("Solution: return value of the function is %d .\n", ret2);
}