#include <stdio.h>
#include <stdlib.h>

int a = 0;
int add(int n)
{
    if(n == 0)
        return 0;
    else
    {
        int result = 0;
        
        result = n + add(n-1);
        return result;
    }
    
}

int fibonacci(int n)
{
    if( n == 1 || n == 2)
        return 1;
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void printArr(int * arr, int n)
{
    printf(" | ");
    for(int i = 0; i< n; i++)
    {
        printf("%d",i);
        printf(" | ");
    }
    printf("\n");
    printf(" | ");
    for(int i = 0; i< n; i++)
    {
        printf("%d",arr[i]);
        printf(" | ");
    }
    printf("\n\n");
}
int factorial(int n)
{
    if(n == 0)
        return 1;
    else
    {
        int result = 0;
        
        result = n * factorial(n-1);
        return result;
    }
    
}

long long prediction(long long n)
{
    a++;
    if(n == 1)
        return 0;
    if(n %2 == 1)
    {
        prediction(3*n+1);
    }
    else
        prediction(n/2);
}

int main(void)
{
    int start = 0;
    int end = 0;
    scanf("%d%d",&start,&end);
    int UBak = 0;
    int Max = 0;
    prediction(start);
    
    UBak = start;
    Max = a;
    a = 0;
    for(int i = start+1; i< end; i++)
    {
        prediction(i);
        if(Max < a )
        {
            UBak = i;
            Max = a;
        }
        a = 0;
    }
    printf("%d %d\n",UBak,Max);
}