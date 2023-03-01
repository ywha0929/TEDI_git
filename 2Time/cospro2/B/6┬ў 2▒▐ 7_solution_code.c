#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len) {
    int answer = 0;

    for(int i = 0; i < chairs_len; i++) {
    	for(int j = 0; j < desks_len; j++) {
    		int price = chairs[i] + desks[j];
    		if(answer < price && price <= money)
    			answer = price;
    	}
    }

    return answer;
}