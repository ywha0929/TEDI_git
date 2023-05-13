#include <stdio.h>

int main(void)
{
    int a =0;
    int r = 0;
    int n = 0;
    long long result;

    scanf("%d%d%d",&a,&r,&n);
    
    result = a;
    for(int i = 0; i<n-1; i++)
    {
        result = result *r;
    }
    printf("%lld\n",result);
}