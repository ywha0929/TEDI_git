#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n = 0; 
    scanf("%d",&n);
    int* arr = (int*) malloc(sizeof(int) * n);
    for(int i =0; i< n; i++)
        scanf("%d",&(arr[i]));
}