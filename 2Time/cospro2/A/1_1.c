// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len) {
    
    int* answer;
    answer = (int*) malloc(sizeof(int) * 6);
    // Write code here.
    for(int i = 0; i<shirt_size_len; i++)
    {
        char * thisSize = shirt_size[i];
        if(thisSize[0] == 'X' && thisSize[1] == 'S')
        {
            answer[0]++;
        }
        else if(thisSize[0] == 'S')
        {
            answer[1]++;
        }
        else if(thisSize[0] == 'M')
        {
            answer[2]++;
        }
        else if(thisSize[0] == 'L')
        {
            answer[3]++;
        }
        else if(thisSize[0] == 'X' && thisSize[1] == 'L')
        {
            answer[4]++;
        }
        else if(thisSize[0] == 'X' && thisSize[1] == 'X' && thisSize[2] == 'L')
        {
            answer[5]++;
        }
    }
    return answer;
}

// The following is main function to output testcase.
int main() {
    char* shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
    int shirt_size_len = 6;
    int* ret = solution(shirt_size, shirt_size_len);

    // Press Run button to receive output.       
    printf("Solution: return value of the function is {");
    for(int i = 0; i < 6; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} .\n");
}