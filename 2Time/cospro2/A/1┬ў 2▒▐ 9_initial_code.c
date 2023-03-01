#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(char* characters) {
    char* result = malloc(sizeof(char)*strlen(characters));
    int result_len = 0;
    result[0] = characters[0];
    result_len++;
    for (int i = 0; i < strlen(characters); i++) {
        if (characters[i - 1] != characters[i]) {
            result[result_len] = characters[i];
            result_len++;
        }
    }
    result[result_len] = NULL;
    return result;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    char* characters = "senteeeencccccceeee";
    char* ret = solution(characters);

    // Press Run button to receive output.
    printf("Solution: return value of the function is %s .\n", ret);
}