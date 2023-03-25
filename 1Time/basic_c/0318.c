#include <stdio.h>



int main(void)
{
    int arr[5] = {3,2,9,1,7};
    int max = 0;
    int max_position = 0;
    
    //selection sort
    for(int i =0; i<5; i++)
    {
        for(int j = 0; j<4-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp =arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // bubble sort
    // for(int i = 0; i< 5; i++)
    // {
    //     max = arr[0];
    //     max_position = 0;
    //     for(int j = 0; j< 5-i; j++)
    //     {
    //         if(arr[j] > max)
    //         {
    //             max = arr[j];
    //             max_position = j;
    //         }
    //     }
    //     int tmp = arr[4-i];
    //     arr[4-i] = max;
    //     arr[max_position] = tmp;

    // }

    for(int i = 0; i< 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

// 3   2   9   1   7