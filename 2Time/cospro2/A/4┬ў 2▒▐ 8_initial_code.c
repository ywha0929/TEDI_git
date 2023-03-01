#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int votes[], int votes_len) {
    int arr[101] = {0, };
    for(int i=0; i<votes_len; i++) {
        arr[votes[i]]++;
    }
    for(int i=1; i<n+1; i++)
        if(arr[i] > n/2)
            return i;
    return -1;
}

// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    int n1 = 3;
    int votes1[7] = {1, 2, 1, 3, 1, 2, 1};
    int votes_len1 = 7;
    int ret1 = solution(n1, votes1, votes_len1);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int n2 = 2;
    int votes2[7] = {2, 1, 2, 1, 2, 2, 1};
    int votes_len2 = 7;
    int ret2 = solution(n2, votes2, votes_len2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);    
}