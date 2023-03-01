#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArr(int * arr, int n)
{
    for(int i = 0; i< n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swap(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArr(int *arr, int n)
{
    
    for(int i = 0; i< n ; i++)
    {
        int max = arr[0];
        int index = 0;
        for(int j = 0; j<n-i; j++)
        {
            if(max < arr[j])
            {
                max = arr[j];
                index = j;
            }
        }
        swap(&arr[index],&arr[n-i-1]);
        printArr(arr,n);
    }
    
}
void reverse(int* arr, int n)
{
    for(int i = 0; i< n/2; i++)
    {
        swap(&arr[i],&arr[n-i-1]);
    }
}
int main(void)
{
    int n = 10;
    int arr[10];
    srand(time(NULL));
    
    for(int i = 0; i<n; i++)
    {
        arr[i] = rand()%100;
    }

    printArr(arr,n);
    sortArr(arr,n);
    reverse(arr,n);
    printArr(arr,n);
    // long long int n = 0;
    // long long int * arr = &n;
    // printf("%d\n",sizeof(arr));
    // printf("%p\n",arr);
    // arr++;
    // printf("%p\n",arr);
}