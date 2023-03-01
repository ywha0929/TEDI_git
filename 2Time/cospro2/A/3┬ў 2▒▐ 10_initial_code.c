#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer = 0;
    for (int i = 0; i < arr_len; i++) 
        for (int j = 0; j < arr_len; j++) 
            if (arr[i]%2 == 0 && arr[i]/2 == arr[j]) {
                answer++;
                continue;
            }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int arr[] = {4, 8, 3, 6, 7};
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}