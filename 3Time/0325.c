#include <stdio.h>

int main(void)
{
    int size = 10;
    int arr[10] = {43,41,24,1,6,8,4,645,6458,6153};
    int max = 0;
    int max_i = 0;
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i< size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}