#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 3;
    // int arr[n];
    int * arr = (int*) malloc(sizeof(int)*n);
    for(int i = 0; i< n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i< n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    n++;
    arr = (int *)realloc(arr,sizeof(int)*n);
    arr[n-1] = 1;
    for(int i = 0; i< n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}