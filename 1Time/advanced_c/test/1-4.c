#include <stdio.h>

void myPrint(int n)
{
    printf("%d\n",n);
    if(n > 1)
        myPrint(n-1);
    return;
}

int main(void)
{
    
}