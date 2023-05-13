#include <stdio.h>

void sum(int a, int b);

int main(void)
{
    int a = 0;
    int b = 1;
    a = sum(a,b);
    printf("%d\n",);
}

void sum(int a, int b)
{
    printf("%d\n",a+b);
    return;
}