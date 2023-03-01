#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int purchase[], int purchase_len) {
    int total = 0;
    for(int i = 0; i < purchase_len; ++i){
        if(purchase[i] >= 1000000)
            total += 50000;
        else if(purchase[i] >= 600000)
            total += 30000;
        else if(purchase[i] >= 400000)
            total += 20000;
        else if(purchase[i] >= 200000)
            total += 10000;
    }
    return total;
}