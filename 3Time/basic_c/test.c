#include <stdio.h>

#define N 5 // 배열의 크기

int main() {
    int arr[N][N];
    int i, j, n = 1, k = 0, m = N;

    while (k < m) {
        // 위쪽 행
        for (j = k; j < m; j++) {
            arr[k][j] = n++;
        }

        // 오른쪽 열
        for (i = k+1; i < m; i++) {
            arr[i][m-1] = n++;
        }

        // 아래쪽 행
        for (j = m-2; j >= k; j--) {
            arr[m-1][j] = n++;
        }

        // 왼쪽 열
        for (i = m-2; i > k; i--) {
            arr[i][k] = n++;
        }

        k++;
        m--;
    }

    // 배열 출력
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
