#include <stdio.h>

int main(void)
{
    int arr[100][100];

    int n = 3;
    int m = 4;
    int count= 1;
    for(int i = 0; i<n; i++)
    {
        if((n-i)%2 == 0)
        {
            for(int j = 0; j < m ; j++)
            {
                arr[n-1-i][j] = count;
                count++;
            }
        }
        else
        {
            for(int j = 0; j < m ; j++)
            {
                arr[n-1-i][m-j-1] = count;
                count++;
            }
        }
        
        
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}