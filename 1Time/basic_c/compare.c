#include <stdio.h>
int main(void)
{
    long long result = 0;
    for(int i = 0; i< 1000000000; i++)
    {
        result = result + i;
    }
    printf("%lld\n",result);
}