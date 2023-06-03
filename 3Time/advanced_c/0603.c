#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int a = 15;
    int * pa = &a;
    printf("%lld\n",pa);
    pa+=3;
    printf("%lld\n",pa);
}