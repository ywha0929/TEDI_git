#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int int_arr[],int length)
{
    for(int i = 0; i< length ; i++)
    {
        printf("%dth number : %d\n" ,i,int_arr[i]);
    }
    return;
}

int minNumber(int int_arr[],int length)
{
    int min = int_arr[0];
    for(int i = 1 ; i< length; i++)
    {
        if( min > int_arr[i])
        {
            min = int_arr[i];
        }
    }
    return min;
}

int Sum(int int_arr[], int length)
{
    int sum = 0;
    for(int i= 0; i< length; i++)
    {
        sum+= int_arr[i];
    }
    return sum;
}

double Average(int int_arr[], int length)
{
    int sum = Sum(int_arr,length);
    double result = (double)sum / length;
    return result;
}

int main(void)
{
    int int_arr[10];
    srand(time(NULL));
    for(int i = 0; i< 10; i++)
    {
        int_arr[i] = rand()%900+100;
    }
    printArr(int_arr,10);
    int min = minNumber(int_arr,10);
    printf("minimum number : %d\n",min);
    printf("Sum : %d\n",Sum(int_arr,10));
    printf("average : %lf\n",Average(int_arr,10));
}