#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int value, char* unit) {
    int converted = 0;
    if (unit[0] == 'C')
        converted = value * 1.8 + 32;
    if (unit[0] == 'F')
        converted = (value - 32) / 1.8;
    return converted;
}