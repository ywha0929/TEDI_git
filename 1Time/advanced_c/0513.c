#include <stdio.h>

int n;

long long int d[110];


long long int f()
{
    long long int min = d[1];
    for(int i = 1; i<=n; i++)
    {
        if( min > d[i])
            min = d[i];
    }
    return min;
}
int main()
{
  printf("%ld\n",sizeof(int));
}