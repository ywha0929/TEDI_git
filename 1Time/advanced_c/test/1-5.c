#include <stdio.h>

void mySwap(int * a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a=0,b=1;

    mySwap(&a,&b);
    printf("%d %d",a,b);
}