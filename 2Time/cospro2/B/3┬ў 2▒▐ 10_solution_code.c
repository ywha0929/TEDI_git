#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer=0;
    for (int i = 0; i < arr_len; i++) {
				for (int j = 0; j < arr_len; j++) {
					if (arr[i]%2==0 && arr[i]/2 == arr[j]) {
                        answer++;
                        break;
                    }
				}
			}
       return answer;
}
